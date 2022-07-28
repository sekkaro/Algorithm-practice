#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  --a;
  --b;
  if ((a + 1) % 10 == b || (b + 1) % 10 == a)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}