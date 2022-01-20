#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	for(int i = 0; i < m; i++){
		cin >> a[i] >> b[i];
	}
	int k;
	cin >> k;
	vector<int> c(k), d(k);
	for(int i = 0; i < k; i++){
		cin >> c[i] >> d[i];
	}
	int k2 = 1 << k;
	int ans = 0;
	for(int i = 0; i < k2; i++){
		vector<int> dish(n + 1);
		bitset<16> s(i);
		for(int j = 0; j < k; j++){
			if(s[j]) dish[d[j]]++;
			else dish[c[j]]++;
		}
		int now = 0;
		for(int j = 0; j < m; j++){
			if(dish[a[j]] == 0) continue;
			if(dish[b[j]] == 0) continue;
			now++;
		}
		ans = max(ans, now);
	}
	cout << ans << '\n';
	return 0;
}
