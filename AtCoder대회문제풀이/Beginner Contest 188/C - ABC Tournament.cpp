#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int m = pow(2, n - 1);
	vector<pair<int, int> > a;
	int max = 0, idx = 0;
	for(int i = 1; i <= pow(2, n); i++){
		int x;
		cin >> x;
		if(x > max){
			max = x;
			idx = i;
		}
		if(i % m == 0){
			a.push_back(make_pair(idx, max));
			max = 0;
		}
	}
	if(a[0].second < a[1].second) cout << a[0].first << '\n';
	else cout << a[1].first << '\n';
}
