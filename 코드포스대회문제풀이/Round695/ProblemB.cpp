#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

int n;
vector<int> a;

int cost(int i){
	if(i == 0 || i == n - 1) return 0;
	return (a[i] < a[i - 1] && a[i] < a[i + 1] || (a[i] > a[i - 1] && a[i] > a[i + 1]));
}
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		a.clear();
		a.resize(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int sum = 0;
		for(int i = 1; i < n - 1; i++){
			sum += cost(i);
		}
		int ans = sum;
		for(int i = 1; i < n - 1; i++){
			int tmp = a[i];
			int base = cost(i) + cost(i - 1) + cost(i + 1);
			a[i] = a[i - 1];
			ans = min(ans, sum - base + cost(i) + cost(i - 1) + cost(i + 1));
			a[i] = a[i + 1];
			ans = min(ans, sum - base + cost(i) + cost(i - 1) + cost(i + 1));
			a[i] = tmp;
		}
		cout << ans << '\n';
	}
	return 0;
}
