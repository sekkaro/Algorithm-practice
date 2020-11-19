#include <iostream>
#include <vector>
#include <queue>
#define MAX 501

using namespace std;

int n, inDegree[MAX], time[MAX], result[MAX];
vector<int> a[MAX];

void topologySort(){
	queue<int> q;
	for(int i = 1; i <= n; i++){
		if(inDegree[i] == 0){
			result[i] = time[i];
			q.push(i);
		}
	}
	for(int i = 1; i <= n; i++){
		int x = q.front();
		q.pop();
		for(int j = 0; j < a[x].size(); j++){
			int y = a[x][j];
			result[y] = max(result[y], result[x] + time[y]);
			if(--inDegree[y] == 0) {
				q.push(y);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		printf("%d\n", result[i]);
	}
}

int main(void){
	int m;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &time[i]);
		while(1){
			int x;
			scanf("%d", &x);
			if(x == -1) break;
			inDegree[i]++;
			a[x].push_back(i);
		}
	}
	topologySort();
}
