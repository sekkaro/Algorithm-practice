#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, C;
	cin >> n >> C;
	map<int, int> events;
	for(int i = 0; i < n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		events[a] += c;
		events[b + 1] -= c;
	}
	int ans = 0, sum = 0, pre = 0;
	for(auto event: events){
		ans += min(C, sum) * (event.first - pre);
		sum += event.second;
		pre = event.first;
	}
	cout << ans << '\n';
	return 0;
}
