#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x;
	cin >> x;
	cout << 100 - (x % 100) << '\n';
	return 0;
}
