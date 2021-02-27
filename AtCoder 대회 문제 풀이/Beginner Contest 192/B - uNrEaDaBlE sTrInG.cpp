#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	bool ok = true;
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0 && s[i] >= 'A' && s[i] <= 'Z'){
			ok = false;
			break;
		} else if(i % 2 != 0 && s[i] >= 'a' && s[i] <= 'z'){
			ok = false;
			break;
		}
	}
	if(ok) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
