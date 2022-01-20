#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define int long long
#define M 998244353

const int mod = 998244353;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }
 
  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vector<int> l(k), r(k);
	for(int i = 0; i < k; i++){
		cin >> l[i] >> r[i];
	}
	vector<mint> dp(n + 1), dpsum(n + 1);
	dp[1] = 1;
	dpsum[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 0; j < k; j++){
			int li = i - r[j];
			int ri = i - l[j];
			if(ri < 0) continue;
			li = max(li, 1LL);
			dp[i] += dpsum[ri] - dpsum[li - 1];
		}
		dpsum[i] = dpsum[i - 1] + dp[i];
	}
	cout << dp[n] << '\n';
	return 0;
}
