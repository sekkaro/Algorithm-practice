#include <iostream>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << n << ' ';
		for(int i = 1; i < n; i++){
			cout << i << ' ';
		}
		cout << '\n';
	}
	return 0;
}
