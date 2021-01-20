#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<pair<int, int> > a;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		a.push_back({x, y});
	}
	bool ok = false;
	for(int i = 0; i < n - 2; i++){
		if(a[i].first == a[i].second && a[i + 1].first == a[i + 1].second && a[i + 2].first == a[i + 2].second){
			ok = true;
			break;
		}
	}
	if(ok) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
