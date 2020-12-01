#include <iostream>

using namespace std;

int d[11];

int main(void){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		int count = 0;
		for(int j = 1; j <= n; j++){
			if(count == x && d[j] == 0){
				d[j] = i;
				break;
			}
			if(d[j] == 0) count++;
		}
	}
	for(int i = 1; i <= n; i++){
		printf("%d ", d[i]);
	}
	return 0;
}
