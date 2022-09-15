#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  if (t.find(s) == 0)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}