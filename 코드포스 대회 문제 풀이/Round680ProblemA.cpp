#include <iostream>

using namespace std;

int main(void){
	int k;
	cin >> k;
	while(k--){
		int n, x;
		cin >> n >> x;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		string ans = "Yes";
		for(int i = 0; i < n; i++){
			if(a[i] + b[n - i - 1] > x){
				ans = "No";
				break;
			} 
		}
		cout << ans << "\n";
	}
	return 0;
}
