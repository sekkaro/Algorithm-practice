#include <iostream>

using namespace std;

int coins[11];

int main(void){
	int n, k, result = 0; 
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> coins[i];
	}
	for(int i = n; i > 0; i--){
		result += k/coins[i];
		k %= coins[i];
	}
	cout << result;
	return 0;
}
