#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<string> S(10);
  for (int i = 0; i < 10; i++) {
    cin >> S[i];
  }
  set<int> I, J;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (S[i][j] == '#') {
        I.insert(i + 1);
        J.insert(j + 1);
      }
    }
  }
  cout << *I.begin() << ' ' << *I.rbegin() << '\n';
  cout << *J.begin() << ' ' << *J.rbegin() << '\n';
  return 0;
}