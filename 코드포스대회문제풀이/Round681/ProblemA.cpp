#include <iostream>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n % 2 == 0){
			for(int i = n * 2; i < n * 4; i += 2){
				cout << i << ' ';
			}
		} else {
			for(int i = (n - 1) * 2; i < (n - 1) * 4; i += 2){
				cout << i << ' ';
			}
			cout << (n * 4) - 2 << ' ';
		}
		cout << '\n';
	}
	return 0;
}
