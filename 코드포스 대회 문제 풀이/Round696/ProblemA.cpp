#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		string b;
		cin >> n >> b;
		string a;
		for(int i = 0; i < n; i++){
			if(b[i] == '0'){
				if(i > 0 && a[i - 1] != b[i - 1]) a += '0';
				else a += '1';
			} else {
				if(i > 0 && a[i - 1] == '1' && b[i - 1] == '1') a += '0';
				else a += '1';
			}
		}
		cout << a << '\n';
	}
	return 0;
}
