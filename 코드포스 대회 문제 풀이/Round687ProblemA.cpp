#include <iostream>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, m, r, c;
		cin >> n >> m >> r >> c;
		int ans = 0;
		if((n - r) + (m - c) > ans){
			ans = (n - r) + (m - c);
		}
		if((r - 1) + (c - 1) > ans){
			ans = (r - 1) + (c - 1);
		}
		if((r - 1) + (m - c) > ans){
			ans = (r - 1) + (m - c);
		}
		if((n - r) + (c - 1) > ans){
			ans = (n - r) + (c - 1);
		}
		cout << ans << '\n';
	}
	return 0;
}
