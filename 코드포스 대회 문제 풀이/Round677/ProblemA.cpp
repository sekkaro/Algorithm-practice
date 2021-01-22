#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		string s = "";
		int ans = 0;
		char c = '1';
		while(s != to_string(x)){
			if(s.size() == 4){
				c++;
				s = "";
			}
			s += c;
			ans += s.size();
		}
		cout << ans << '\n';
	}
	return 0;
}
