#include <iostream>
#include <vector>
 
using namespace std;
 
#define long long int
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<int, int> > v[10];
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			for(int j = 0; j < n; j++){
				v[s[j] - '0'].push_back(make_pair(i, j));
			}
		}
		for(int i = 0; i < 10; i++){
			int mini = n, maxi = -1, minj = n, maxj = -1, ans = 0;
			for(int j = 0; j < v[i].size(); j++){
				mini = min(mini, v[i][j].first);
				maxi = max(maxi, v[i][j].first);
				minj = min(minj, v[i][j].second);
				maxj = max(maxj, v[i][j].second);
			}
			for(int j = 0; j < v[i].size(); j++){
				ans = max(ans, max(maxi - v[i][j].first, v[i][j].first - mini) * max(n - 1 - v[i][j].second,  v[i][j].second));
				ans = max(ans, max(maxj - v[i][j].second, v[i][j].second - minj) * max(n - 1 - v[i][j].first,  v[i][j].first));
			}
			cout << ans << ' ';
		}
		cout << '\n';
	}
	return 0;
}
