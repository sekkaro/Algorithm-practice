#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			a.push_back(i);
			if(n / i != i) a.push_back(n / i);
		}
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < a.size(); i++){
		cout << a[i] << '\n';
	}
	return 0;
}
