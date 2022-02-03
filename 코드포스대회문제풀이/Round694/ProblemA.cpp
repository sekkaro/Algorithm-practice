#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int min = 0, max = 0;
		for(int i = 0; i < n; i++){
			int y = a[i];
			while(y % x != 0 && i + 1 < n){
				i++;
				y += a[i];
			}
			min += ceil(1.0 * y / x);
		}
		for(int i = 0; i < n; i++){
			int y = a[i];
			while(y % x == 0 && i + 1 < n){
				i++;
				y += a[i];
			}
			max += ceil(1.0 * y / x);
		}
		cout << min << ' ' << max << endl;
	}
	return 0;	
}
