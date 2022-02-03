#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n == 1){
			cout << "9\n";
			continue;
		} else if(n == 2){
			cout << "98\n";
			continue;
		} else if(n == 3){
			cout << "989\n";
			continue;
		}
		string ans = "989";
		int c = 0;
		for(int i = 0; i < n - 3; i++){
			ans += c + '0';
			c++;
			if(c == 10) c = 0;
		}
		cout << ans << '\n';
	}
	return 0;
}
