#include <iostream>

using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m = 0, mi = 0;
		for(int i = 2; i * i <= n; i++){
			int c = 0;
			int z = n;
			while(z % i == 0){
				z = z / i;
				c++;
			}
			if(c > m){
				m = c;
				mi = i;
			}
		}
		if(mi == 0){
			cout << 1 << '\n' << n << '\n';
		} else {
			cout << m << '\n';
			while(n % (mi * mi) == 0){
				cout << mi << " ";
				n = n / mi;
			}
			cout << n << '\n';
		}
	}
	return 0;
}
