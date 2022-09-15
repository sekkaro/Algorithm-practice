#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define M 998244353

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  cout << (M + (n % M)) % M << '\n';
  return 0;
}