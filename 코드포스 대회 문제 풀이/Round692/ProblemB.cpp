#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		while(1){
			int n1 = n;
			while(n1){
				int r = n1 % 10;
				if(r > 1 && n % r != 0){
					break;
				}
				n1 /= 10;
			}
			if(n1 == 0){
				break;
			}
			n++;
		}
		cout << n << '\n';
	}
	return 0;
}
