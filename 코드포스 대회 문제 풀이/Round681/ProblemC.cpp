#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		long long sum = 0LL;
		vector<pair<long long, int> > c;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			c.push_back(make_pair(a[i], i));
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
			sum += b[i];
		}
		sort(c.begin(), c.end());
		long long ans = sum;
		for(int i = 0; i < n; i++){
			sum -= b[c[i].second];
			ans = min(ans, max(sum, c[i].first));
		}
		cout << ans << '\n';
	}
	return 0;
}
