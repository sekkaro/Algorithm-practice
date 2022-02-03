#include <iostream>

using namespace std;

#define int long long 

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		int res = min(a, min(b , c));
		if((a + b + c) % 9 == 0 && (a + b + c) / 9 <= res){
			cout << "YES\n";
		} else cout << "NO\n";
	}
	return 0;
}
