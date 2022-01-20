#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int h, w, m;
	cin >> h >> w >> m;
	vector<int> hs(h + 1), ws(w + 1);
	set<pair<int, int> > s;
	for(int i = 0; i < m; i++){
		int r, c;
		cin >> r >> c;
		hs[r]++;
		ws[c]++;
		s.emplace(r, c);
	}
	int mh = 0, mw = 0;
	for(int i = 1; i <= h; i++){
		mh = max(mh, hs[i]);
	}
	for(int i = 1; i <= w; i++){
		mw = max(mw, ws[i]);
	}
	vector<int> is, js;
	for(int i = 1; i <= h; i++){
		if(mh == hs[i]) is.push_back(i);
	}
	for(int i = 1; i <= w; i++){
		if(mw == ws[i]) js.push_back(i);
	}
	int ans = mh + mw;
	for(int i : is){
		for(int j : js){
			if(s.count(make_pair(i, j))) continue;
			cout << ans << '\n';
			return 0;
		}
	}
	cout << ans - 1 << '\n';
	return 0;
}
