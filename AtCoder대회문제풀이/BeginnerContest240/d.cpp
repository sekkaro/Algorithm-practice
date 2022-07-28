#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
using P = pair<int, int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<P> p;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ans++;
    if (p.empty() || p.back().first != a)
      p.emplace_back(a, 1);
    else
      p.back().second++;
    if (a == p.back().second) {
      ans -= p.back().second;
      p.pop_back();
    }
    cout << ans << '\n';
  }
  return 0;
}