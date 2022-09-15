#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  set<int> s;
  for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }
  cout << s.size() << '\n';
  return 0;
}