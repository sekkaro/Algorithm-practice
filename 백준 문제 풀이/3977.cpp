#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define MAX 100001

using namespace std;

int n, m;
int id, d[MAX];
bool finished[MAX];
vector<int> a[MAX];
vector<vector<int> > SCC;
stack<int> s;
int group[MAX];
bool inDegree[MAX];
vector<int> result;

int dfs(int x){
	d[x] = ++id;
	s.push(x);
	
	int result = d[x];
	for(int i = 0; i < a[x].size(); i++){
		int y = a[x][i];
		if(d[y] == 0) result = min(result, dfs(y));
		else if(!finished[y]) result = min(result, d[y]);
	}
	
	if(result == d[x]){
		vector<int> scc;
		while(1){
			int t = s.top();
			s.pop();
			scc.push_back(t);
			group[t] = SCC.size() + 1;
			finished[t] = true;
			if(t == x) break;
		}
		SCC.push_back(scc);
	}
	
	return result;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		SCC.clear();
		fill(d, d + MAX, 0);
		fill(finished, finished + MAX, 0);
		fill(inDegree, inDegree + MAX, false);
		result.clear();
		scanf("%d %d", &n, &m);
		for(int i = 1; i <= n; i++){
			a[i].clear();
		}
		for(int i = 0; i < m; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			a[x + 1].push_back(y + 1);
		}
		for(int i = 1; i <= n; i++){
			if(d[i] == 0) dfs(i);
		}
		for(int i = 1; i <= n; i++){
			for(int j = 0; j < a[i].size(); j++){
				int y = a[i][j];
				if(group[i] != group[y]){
					inDegree[group[y]] = true;
				}
			}
		}
		int count = 0;
		for(int i = 0; i < SCC.size(); i++){
			if(!inDegree[i + 1]){
				count++;
				for(int j = 0; j < SCC[i].size(); j++){
					result.push_back(SCC[i][j] - 1);
				}
			}
		}
		sort(result.begin(), result.end());
		if(count != 1){
			printf("Confused\n\n");
		} else {
			for(int i = 0; i < result.size(); i++){
				printf("%d\n", result[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
