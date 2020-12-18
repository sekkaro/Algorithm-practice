#include <iostream>

using namespace std;

#define int long long

signed main(void){
	int l;
	cin >> l;
	int ans = 1;
	for(int i = 1; i <= 11; ++i){
		ans *= (l - i);
		ans /= i;
	}
	cout << ans << endl;
	return 0;
}
