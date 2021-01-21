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
		string s;
		cin >> n >> m >> s;
		vector<int> maxl(n), minl(n), curl(n);
		int maxN = 0, minN = 0, cur = 0;
		for(int i = 0; i < n; i++){
			cur += (s[i] == '+')?1:-1;
			maxN = max(maxN, cur);
			minN = min(minN, cur);
			maxl[i] = maxN;
			minl[i] = minN;
			curl[i] = cur;
		}
		vector<int> maxr(n), minr(n), curr(n);
		minN = maxN = cur = 0;
		for(int i = n - 1; i >= 0; i--){
			cur += (s[i] == '+')?-1:1;
			maxN = max(maxN, cur);
			minN = min(minN, cur);
			maxr[i] = maxN;
			minr[i] = minN;
			curr[i] = cur;
		}
		for(int i = 0; i < m; i++){
			int l, r;
			cin >> l >> r;
			
			int curL = (l - 2 >= 0)?curl[l - 2]:0;
			int maxL = (l - 2 >= 0)?maxl[l - 2]:0;
			int minL = (l - 2 >= 0)?minl[l - 2]:0;
			
			int diff = (r < n)?curL - curr[r]:curL;
			int maxR = (r < n)?maxr[r] + diff:diff;
			int minR = (r < n)?minr[r] + diff:diff;
			
			int ans = max(maxL, maxR) - min(minL, minR) + 1;
			cout << ans << '\n';
		}
	}
	return 0;
}
