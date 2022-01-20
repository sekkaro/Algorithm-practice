#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	if(s[0] == s[1] && s[1] == s[2]) cout << "Won\n";
	else cout << "Lost\n";
	return 0;
}
