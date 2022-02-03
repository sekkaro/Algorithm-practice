#include <iostream>
#include <vector>
 
using namespace std;
 
#define long long int
#define INF 1000000000
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n, p, k, x, y;
		string s;
		cin >> n >> p >> k >> s >> x >> y;
		int ans = INF;
		p--;
		vector<int> d(n);
		for(int i = n - 1; i >= p; i--){
			if(s[i] == '0') d[i] = x;
			if(i + k < n) d[i] += d[i + k];
		}
		for(int i = p; i < n; i++){
			int cost = (i - p) * y + d[i];
			if(cost < ans) ans = cost;
		}
		cout << ans << '\n';
	}
	return 0;
}
