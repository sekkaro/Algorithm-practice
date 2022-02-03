#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> c(3);
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			c[x]++;
		}
		if(c[1] && c[1] % 2 != 0 || !c[1] && c[2] % 2 != 0) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;	
}
