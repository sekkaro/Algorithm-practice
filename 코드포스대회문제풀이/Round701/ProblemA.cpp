#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define INF 1e9

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if(a < b) cout << "1\n";
		else if(a == b) cout << "2\n";
		else {
			int ans = INF, in = b;
			if(b == 1) b++;
			while(1){
				int temp = 1, s = 0;
				while(a >= temp){
					temp *= b;
					s++;
				}
				if(s + (b - in) > ans) break;
				ans = s + (b - in);
				b++;
			}
			cout << ans << '\n';
		}
	}
	return 0;
}
