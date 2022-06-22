#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int64_t x, a, d, n;
  cin >> x >> a >> d >> n;

  auto eval = [&](int64_t n) -> int64_t {
    int64_t num = a + (n - 1) * d;
    return abs(x - num);
  };

  int64_t l = 1, r = n;
  while (l < r) {
    ll mid0 = l + (r - l) / 2;
    ll mid1 = mid0 + 1;

    if (eval(mid0) < eval(mid1)) {
      r = mid0;
    } else {
      l = mid1;
    }
  }
  cout << eval(l) << endl;
  return 0;
}