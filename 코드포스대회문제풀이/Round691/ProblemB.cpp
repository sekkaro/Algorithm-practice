#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(void){
	int n;
	cin >> n;
	if(n % 2 == 0) cout << ((n / 2) + 1) * ((n / 2) + 1) << '\n';
	else cout << 2 * ((pow(((n - 1) / 2) + 1, 2)) + (((n - 1) / 2) + 1)) << '\n';
	return 0;
}
