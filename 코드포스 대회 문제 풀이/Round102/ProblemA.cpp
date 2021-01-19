#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, d;
		cin >> n >> d;
		vector<int> a(n);
		int c = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > d) c++;
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] + a[j] <= d){
					cnt++;
					break;
				}
			}
		}
		if(!c || cnt) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
