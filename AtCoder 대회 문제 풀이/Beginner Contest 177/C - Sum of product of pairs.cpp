#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define M 1000000007LL

int mod(int x){
    return ((x%M + M)%M);
}
int add(int a, int b){
    return mod(mod(a)+mod(b));
}
int mul(int a, int b){
    return mod(mod(a)*mod(b));
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = 0, sum = 0;
	for(int i = 0; i < n; i++){
		ans = add(ans, mul(sum, a[i]));
		sum += a[i];
	}
	cout << ans << '\n';
	return 0;
}
