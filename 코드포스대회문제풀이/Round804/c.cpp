#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

#define M 1000000007LL

ll mod(ll x) { return ((x % M + M) % M); }
ll mul(ll a, ll b) { return mod(mod(a) * mod(b)); }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), pos(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      pos[a[i]] = i;
    }
    ll l, r, ans = 1;
    l = r = pos[0];
    for (int i = 1; i < n; i++) {
      if (pos[i] < l)
        l = pos[i];
      else if (pos[i] > r)
        r = pos[i];
      else
        ans = mul(ans, r - l + 1 - i);
    }
    cout << ans << endl;
  }
  return 0;
}