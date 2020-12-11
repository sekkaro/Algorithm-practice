#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i] == b[j]){
					ans++;
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
