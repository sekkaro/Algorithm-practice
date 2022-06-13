#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, a, b;
  cin >> n >> a >> b;
  cout << n * (n + 1) / 2 - (n / a * (a * (n / a) + a) / 2) -
              (n / b * (b * (n / b) + b) / 2) +
              (n / __detail::__lcm(a, b) *
               (__detail::__lcm(a, b) * (n / (__detail::__lcm(a, b))) +
                (__detail::__lcm(a, b))) /
               2)
       << endl;
  return 0;
}