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
		vector<int> a(n);
		priority_queue<pair<int, int> > q;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			q.push({a[i], i});
		}
		int idx = a.size();
		while(!q.empty()){
			int x = q.top().second;
			q.pop();
			if(idx < x) continue;
			for(int i = x; i < idx; i++){
				cout << a[i] << ' ';
			}
			idx = x;
		}
		cout << '\n';
	}
	return 0;
}
