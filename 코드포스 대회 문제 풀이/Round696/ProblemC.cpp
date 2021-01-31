#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(2 * n);
		multiset<int, greater<int>> ms;
		for(int i = 0; i < 2 * n; i++){
			cin >> a[i];
			ms.insert(a[i]);
		}
		sort(a.begin(), a.end());
		vector<pair<int, int> > b;
		int x, y, z;
		bool ok = false;
		for(int i = 0; i < 2 * n - 1; i++){
			x = a[i] + a[2 * n - 1];
			multiset<int, greater<int>> temp = ms;
			b.clear();
			ok = false;
			while(!temp.empty()){
				y = *temp.begin();
				temp.erase(temp.begin());
				z = x - y;
				auto it = temp.find(z);
				if(it != temp.end()){
					temp.erase(it);
					b.push_back({y, z});
					x = max(y, z);
				} else break;
			}
			if(temp.empty()){
				ok = true;
				break;
			}
		}
		if(!ok) cout << "NO\n";
		else {
			cout << "YES\n";
			cout << b[0].first + b[0].second << '\n';
			for(auto it: b){
				cout << it.first << ' ' << it.second << '\n';
			}
		}
	}
	return 0;
}
