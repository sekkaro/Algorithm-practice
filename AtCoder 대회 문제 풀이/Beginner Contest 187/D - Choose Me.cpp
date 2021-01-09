#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int n;
	cin >> n;
	int sum = 0;
	vector<int> an;
	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		sum += a;
		an.push_back(2 * a + b);
	}
	sort(an.begin(), an.end());
	int ans = 0;
	for(int i = n - 1; i >= 0; i--){
		sum -= an[i];
		ans++;
		if(sum < 0) break;
	}
	cout << ans << endl;
	return 0;	
}
