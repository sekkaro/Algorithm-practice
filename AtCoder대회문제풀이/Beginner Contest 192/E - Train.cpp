#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define INF 1e18

vector<vector<pair<int, pair<int, int> > >> g;
vector<int> d;

void dijkstra(int start){
	d[start] = 0;
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(start, 0));
	while(!pq.empty()){
		int current = pq.top().first;
		int distance = -pq.top().second;
		pq.pop();
		if(d[current] < distance) continue;
		for(int i = 0; i < g[current].size(); i++){
			int next = g[current][i].first;
			int nextDistance = (distance + g[current][i].second.second - 1) / g[current][i].second.second * g[current][i].second.second + g[current][i].second.first;
			if(nextDistance < d[next]){
				d[next] = nextDistance;
				pq.push(make_pair(next, -nextDistance));
			}
		}
	}
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	g.resize(n + 1);
	for(int i = 0; i < m; i++){
		int a, b, t, k;
		cin >> a >> b >> t >> k;
		g[a].push_back({b, {t, k}});
		g[b].push_back({a, {t, k}});
	}
	d.resize(n + 1, INF);
	dijkstra(x);
	int ans = d[y];
	if(ans == INF) ans = -1;
	cout << ans << '\n';
	return 0;
}
