#include <iostream>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		char ans = 'a';
		for(int i = 1; i <= n; i++){
			cout << ans;
			if(i % k == 0) ans = (ans + 1 == 'd')?'a':ans + 1;
		}
		cout << '\n';
	}
	return 0;
}
