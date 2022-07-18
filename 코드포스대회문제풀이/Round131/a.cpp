#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
      int x;
      cin >> x;
      if (x)
        cnt++;
    }
    if (!cnt)
      cout << 0 << endl;
    else if (cnt == 4)
      cout << 2 << endl;
    else
      cout << 1 << endl;
  }
  return 0;
}