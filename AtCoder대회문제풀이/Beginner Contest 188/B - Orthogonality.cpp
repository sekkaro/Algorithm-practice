#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		int b;
		cin >> b;
		sum += a[i] * b;
	}
	if(sum == 0) cout << "Yes\n";
	else cout << "No\n";
}
