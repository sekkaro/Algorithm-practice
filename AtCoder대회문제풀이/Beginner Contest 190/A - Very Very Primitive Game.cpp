#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	cin >> a >> b >> c;
	if(c){
		if(a >= b) cout << "Takahashi\n";
		else cout << "Aoki\n";
	} else {
		if(a > b) cout << "Takahashi\n";
		else cout << "Aoki\n";
	}
	return 0;
}
