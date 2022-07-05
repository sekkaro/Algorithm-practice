#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, k;
  cin >> a >> b >> k;
  cout << ceil(log2(1.0 * b / a) / log2(k)) << endl;
  return 0;
}