#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end(), greater<int>());
		int cnt = 0, alice = 0, bob = 0;
		for(int i = 0; i < n; i++){
			if(i % 2 == 0 && a[i] % 2 == 0) alice += a[i];
			else if(i % 2 != 0 && a[i] % 2 != 0) bob += a[i];
		}
		if(alice > bob) cout << "Alice\n";
		else if(alice < bob) cout << "Bob\n";
		else cout << "Tie\n";
	}
	return 0;	
}
