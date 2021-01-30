#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define M 100001

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	vector<int> a(M);
	for(int i = 2; i < M; i++){
		for(int j = i * 2; j < M; j+=i){
			if(a[j] == 1) continue;
			a[j] = 1;
		}
	}
	while(t--){
		int d;
		cin >> d;
		int n = d + 1;
		for(int i = n; i < M; i++){
			if(!a[i]){
				n = i;
				break;
			}
		}
		int m = n + d;
		for(int i = m; i < M; i++){
			if(!a[i]){
				m = i;
				break;
			}
		}
		cout << n * m << '\n';
	}
	return 0;
}
