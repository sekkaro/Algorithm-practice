#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long
#define N 300005
#define M 998244353

int pw(int a, int p, int MOD){
	int result = 1;
	while(p > 0){
		if(p & 1) result = a * result % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return result;
}

int fact[N], invfact[N];

void init(){
	int p = M;
	fact[0] = 1;
	int i;
	for(i = 1; i < N; i++){
		fact[i] = i * fact[i - 1] % p;
	}
	i--;
	invfact[i] = pw(fact[i], p - 2, p);
	for(i--; i >= 0; i--){
		invfact[i] = invfact[i + 1] * (i + 1) % p;
	}
}

int ncr(int n, int r){
	if(r > n || n < 0 || r < 0) return 0;
	return fact[n]*invfact[r]%M*invfact[n-r]%M;
}

signed main(void){
	init();
	int n;
	cin >> n;
	vector<int> a(2*n);
	for(int i = 0; i < 2 * n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int ss = 0;
	int bs = 0;
	for(int i = 0; i < n; i++) ss += a[i];
	for(int i = n; i < 2 * n; i++) bs += a[i];
	int tot = (bs - ss) % M;
	cout << tot * ncr(2 * n, n) % M;
	return 0;
}
