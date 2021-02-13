#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(n), c(m), maxreq(n + 1), req(n + 1), avail(n + 1);
		vector<vector<int>> ids(n + 1);
		vector<int> last(n + 1);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
			if(b[i] != a[i]){
				req[b[i]]++;
				ids[b[i]].push_back(i + 1);
			}
			maxreq[b[i]]++;
			last[b[i]] = i + 1;
		}
		for(int i = 0; i < m; i++){
			cin >> c[i];
			avail[c[i]]++;
		}
		
		bool ok = true;
		for(int i = 1; i <= n; i++){
			if(avail[i] < req[i]){
				ok = false;
				break;
			}
		}
		
		if(!ok || maxreq[c[m - 1]] == 0) cout << "NO\n";
		else {
			cout << "YES\n";
			
			int wrong;
			if(ids[c[m - 1]].empty()){
				wrong = last[c[m - 1]];
			} else {
				wrong = ids[c[m - 1]][0];
			}
			
			for(int i = 0; i < m; i++){
				int x = c[i];
				if(ids[x].empty()){
					cout << wrong << ' ';
				} else {
					cout << ids[x].back() << ' ';
					ids[x].pop_back();
				}
			}
			cout << '\n';
		}
	}
	return 0;
}
