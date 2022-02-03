#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		int n = a.size();
		int m = b.size();
		string tmpA = a;
		string tmpB = b;
		int tmpN = n;
		int tmpM = m;
		while(n != m){
			if(n < m){
				a += tmpA;
				n += tmpN;
			} else {
				b += tmpB;
				m += tmpM;
			}
		}
		if(a == b) cout << a << '\n';
		else cout << "-1\n";
	}
	return 0;
}
