#include <iostream>

using namespace std;

int main(void){
	int k;
	cin >> k;
	while(k--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int left = a[0];
		for(int i = n - 1; i > 0; i--){
			a[i] -= a[i - 1];
			if(a[i] < 0) left += a[i];
		}
		if(left >= 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
