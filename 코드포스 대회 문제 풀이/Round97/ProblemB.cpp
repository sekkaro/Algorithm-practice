#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		int ans = 0;
		for(int i = 0; i < n - 1; i++){
			if(s[i] != s[0] && s[i + 1] != s[0]){
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;	
}
