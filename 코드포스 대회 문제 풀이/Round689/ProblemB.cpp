#include <iostream>
#include <vector>

using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> c(n, vector<int> (m, 0));
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			for(int j = 0; j < i + 1; j++){
				int left = 0, right = m - 1;
				while(left <= right){
					if(s[left] == '*'){
						if(left != 0 && i > 0) c[i][left] = min(c[i][left - 1], min(c[i - 1][left], c[i][left + 1])) + 1;
						else if(!c[i][left]) c[i][left] = 1;
					}
					left++;
					if(s[right] == '*'){
						if(right != m - 1 && i > 0) c[i][right] = min(c[i][right - 1], min(c[i - 1][right], c[i][right + 1])) + 1;
						else if(!c[i][right]) c[i][right] = 1;
					}
					right--;
				}
			}
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				ans += c[i][j];
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
