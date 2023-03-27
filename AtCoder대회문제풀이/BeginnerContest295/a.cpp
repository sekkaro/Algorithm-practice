#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ok = 0;
  string t[5] = {"and", "not", "that", "the", "you"};
  for (int i = 0; i < n; i++) {
    string w;
    cin >> w;
    for (int j = 0; j < 5; j++) {
      if (w.compare(t[j]) == 0)
        ok = 1;
    }
  }
  if (ok)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}