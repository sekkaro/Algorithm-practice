#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
#define int long long
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(i != 0) sum += abs(a[i] - a[i - 1]);
		}
		if(sum == 0 || n == 2){
			cout << "0\n";
			continue;
		}
		vector<int> d(n);
		for(int i = 1; i < n - 1; i++){
			d[i] = abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]);
		}
		int ans = 0;
		for(int idx = 1; idx < n - 1; idx++){
			ans = max(ans, d[idx] - abs(a[idx - 1] - a[idx + 1]));
			int diff = 0;
			if(idx - 1 == 0) diff = abs(a[idx - 1] - a[idx]);
			else diff = d[idx - 1] - abs(a[idx - 2] - a[idx]);
			ans = max(ans, diff);
			if(idx + 1 == n - 1) diff = abs(a[idx + 1] - a[idx]);
			else diff = d[idx + 1] - abs(a[idx + 2] - a[idx]);
			ans = max(ans, diff);
		}
		cout << sum - ans << '\n';
	}
	return 0;
}

