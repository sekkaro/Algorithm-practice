#include <bits/stdc++.h>
 
using namespace std;

#define int long long
#define INF 1e9

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
		int min = INF, idx = -1;
		for(int i = 0; i < n; i++){
			int cnt = 0;
			int y = a[i];
			while(y % x == 0){
				cnt++;
				y /= x;
			}
			if(cnt < min){
				min = cnt;
				idx = i;
			}
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			int cnt = 0;
			int max = (i < idx)?min + 1:min;
			int c = 1;
			while(cnt <= max){
				ans += c * a[i];
				cnt++;
				c *= x;
				a[i] /= x;
			}
		}
		cout << ans << endl;
	}
	return 0;	
}
