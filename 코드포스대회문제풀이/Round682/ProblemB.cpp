#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define int long long
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		string ans = "NO";
		for(int i = 1; i < n; i++){
			if(a[i] == a[i - 1]){
				ans = "YES";
				break;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
