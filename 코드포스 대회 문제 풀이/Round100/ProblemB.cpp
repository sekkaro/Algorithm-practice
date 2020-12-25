#include <iostream>
#include <vector>
 
using namespace std;
 
#define int long long 
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		int sumO = 0, sumE = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(i % 2 == 0) sumE += a[i];
			else sumO += a[i];
		}
		if(sumE < sumO){
			for(int i = 0; i < n; i++){
				if(i % 2 == 0) cout << "1 ";
				else cout << a[i] << ' ';
			}
		} else {
			for(int i = 0; i < n; i++){
				if(i % 2 != 0) cout << "1 ";
				else cout << a[i] << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
