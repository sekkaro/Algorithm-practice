#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define long long int

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		int max = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max) max = a[i];
		}
		vector<int> c(max + 1);
		for(int i = 0; i < n; i++){
			c[a[i]]++;
		}
		int flag = 0;
		for(int i = 1; i <= max; i++){
			if(c[i] == 1){
				auto it = find(a.begin(), a.end(), i);
				cout << it - a.begin() + 1 << '\n';
				flag = 1;
				break; 
			} 
		}
		if(!flag) cout << "-1\n";
	}
	return 0;
}
