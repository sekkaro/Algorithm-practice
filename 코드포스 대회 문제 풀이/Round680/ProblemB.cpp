#include <iostream>

using namespace std;

int main(void){
	int k;
	cin >> k;
	while(k--){
		int a[4];
		for(int i = 0; i < 4; i++){
			cin >> a[i];
		}
		cout << max(a[0] - a[3], a[2] - a[1]) + a[3] + a[1] << '\n';
	}
	return 0;
}
