#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	set<int> s;
	for(int i = 2; i <= sqrt(n); i++){
		for(int j = i * i; j <= n; j *= i){
			s.insert(j);
		}
	}
	cout << n - s.size() << '\n';
	return 0;
}
