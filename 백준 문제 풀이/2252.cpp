#include <iostream>
#include <vector>
#include <queue>
#define MAX 32001

using namespace std;

int n, inDegree[MAX], result[MAX];
vector<int> a[MAX];

void topologySort(){
	queue<int> q;
	for(int i = 1; i <= n; i++){
		if(inDegree[i] == 0){
			q.push(i);
		}
	}
	for(int i = 1; i <= n; i++){
		int x = q.front();
		q.pop();
		result[i] = x;
		for(int j = 0; j < a[x].size(); j++){
			int y = a[x][j];
			if(--inDegree[y] == 0) {
				q.push(y);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		printf("%d ", result[i]);
	}
}

int main(void){
	int m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		a[x].push_back(y);
		inDegree[y]++;
	}
	topologySort();
}
