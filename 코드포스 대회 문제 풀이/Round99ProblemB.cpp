#include <iostream>

using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int sum = 0, i = 0;
		for(i = 1; sum < x; i++){
			sum += i;
		}
		i--;
		if(x == sum - 1) cout << i + 1 << '\n';
		else cout << i << '\n';
	}
	return 0;
}
