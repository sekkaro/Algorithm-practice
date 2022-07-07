#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a < c || (a == c && b <= d))
    cout << "Takahashi\n";
  else
    cout << "Aoki\n";
  return 0;
}