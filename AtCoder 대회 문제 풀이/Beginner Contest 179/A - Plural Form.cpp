#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	if(s[s.size() - 1] == 's'){
		s += 'e';
	}
	s += 's';
	cout << s;
	return 0;
}
