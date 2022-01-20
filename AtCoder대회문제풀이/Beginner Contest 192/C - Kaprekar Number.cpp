#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	int k;
	cin >> s >> k;
	for(int i = 0; i < k; i++){
		sort(s.begin(), s.end());
		int a = stoi(s);
		sort(s.begin(), s.end(), greater<char>());
		int b = stoi(s);
		int n = b - a;
		s = to_string(n);
		if(n == 0) break;
	}
	cout << s << '\n';
	return 0;
}
