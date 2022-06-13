#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c;
  vector<int> v(3);
  cin >> a >> b >> c;
  v[0] = a;
  v[1] = b;
  v[2] = c;
  sort(v.begin(), v.end());
  if (v[1] == b)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}