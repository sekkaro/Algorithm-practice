#include<iostream>

using namespace std;

string a[1001]; 
int c[4];

int main(void){
	int n, m, dis = 0;
	string res;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		fill(c, c + 4, 0);
		for(int j = 0; j < n; j++){
			if(a[j][i] == 'A'){
				c[0]++;
			} else if(a[j][i] == 'C'){
				c[1]++;
			} else if(a[j][i] == 'G'){
				c[2]++;
			} else {
				c[3]++;
			}
		}
		int max = 0, position = -1;
		for(int j = 0; j < 4; j++){
			if(c[j] > max){
				max = c[j];
				position = j;
			}
		}
		if(position == 0){
			res += 'A';	
		} else if(position == 1){
			res += 'C';
		} else if(position == 2){
			res += 'G';
		} else {
			res += 'T';
		}
		for(int j = 0; j < n; j++){
			if(a[j][i] != res[i]){
				dis++;
			}
		}
	}
	cout << res << "\n";
	cout << dis;
	return 0;
}
