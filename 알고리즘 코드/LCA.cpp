#include <iostream>
#include <vector>
#define MAX 1001
#define LOG 11

using namespace std;

int n, m, parent[MAX][LOG], d[MAX];
bool c[MAX];
vector<int> a[MAX];

void dfs(int x, int depth){
	c[x] = true;
	d[x] = depth;
	for(int i = 0; i < a[x].size(); i++){
		int y = a[x][i];
		if(c[y]) continue;
		parent[y][0] = x;
		dfs(y, depth + 1);
	}
}

void setParent(){
	dfs(0, 0);
	for(int j = 1; j < LOG; j++){
		for(int i = 0; i < n; i++){
			parent[i][j] = parent[parent[i][j - 1]][j - 1];
		}
	}
}

int LCA(int x, int y){
	if(d[x] > d[y]){
		swap(x, y);
	}
	for(int i = LOG - 1; i >= 0; i--){
		if(d[y] - d[x] >= (1 << i)){
			y = parent[y][i];
		}
	}
	if(x == y) return x;
	for(int i = LOG - 1; i >= 0; i--){
		if(parent[x][i] != parent[y][i]){
			x = parent[x][i];
			y = parent[y][i];
		}
	}
	return parent[x][0];
}

int main(void){
	n = 21;
	a[0].push_back(1);
	a[1].push_back(0);
	
	a[0].push_back(2);
	a[2].push_back(0);
	
	a[1].push_back(3);
	a[3].push_back(1);
	
	a[1].push_back(4);
	a[4].push_back(1);
	
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[2].push_back(6);
	a[6].push_back(2);
	
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[3].push_back(8);
	a[8].push_back(3);
	
	a[4].push_back(9);
	a[9].push_back(4);
	
	a[4].push_back(10);
	a[10].push_back(4);
	
	a[4].push_back(11);
	a[11].push_back(4);
	
	a[8].push_back(12);
	a[12].push_back(8);
	
	a[8].push_back(13);
	a[13].push_back(8);
	
	a[9].push_back(14);
	a[14].push_back(9);
	
	a[10].push_back(15);
	a[15].push_back(10);
	
	a[13].push_back(16);
	a[16].push_back(13);
	
	a[13].push_back(17);
	a[17].push_back(13);
	
	a[14].push_back(18);
	a[18].push_back(14);
	
	a[15].push_back(19);
	a[19].push_back(15);
	
	a[17].push_back(20);
	a[20].push_back(17);
	
	setParent();
	cout << "5客 7狼 LCA: " << LCA(5, 7) << '\n';
	cout << "15客 20狼 LCA: " << LCA(15, 20) << '\n';
	cout << "16客 17狼 LCA: " << LCA(16, 17) << '\n';
	cout << "10客 9狼 LCA: " << LCA(10, 9) << '\n';
	cout << "3客 17狼 LCA: " << LCA(3, 17) << '\n';
	return 0; 
}
