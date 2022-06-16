#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

bool ok(vector<int> pos, int m) {
  int k = pos.size();
  int x = k - m;
  for (int i = 0; i <= m; i++) {
    int l = pos[i];
    int r = pos[i + x - 1];
    if (r - l - x + 1 <= m)
      return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    vector<int> pos;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '1')
        pos.push_back(i);
    }
    int l = 0, r = pos.size();
    while (r - l > 1) {
      int mid = (l + r) / 2;
      if (ok(pos, mid))
        r = mid;
      else
        l = mid;
    }
    if (pos.size() == 0 || pos[pos.size() - 1] - pos[0] == pos.size() - 1)
      cout << 0 << endl;
    else
      cout << r << endl;
  }
  return 0;
}