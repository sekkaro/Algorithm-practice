#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s.size() % 2 != 0 || s[0] == ')' || s[s.size() - 1] == '(') cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;	
}
