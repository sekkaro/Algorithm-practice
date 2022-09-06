#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

string solve() {
  string s;
  cin >> s;
  if (s[0] == '1')
    return "No";
  vector<vector<int>> a = {{s[6]},       {s[3]}, {s[1], s[7]}, {s[0], s[4]},
                           {s[2], s[8]}, {s[5]}, {s[9]}};
  vector<int> ac(7, 0);
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < a[i].size(); j++) {
      if (a[i][j] == '1')
        ac[i]++;
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = i + 2; j < 7; j++) {
      if (ac[i] && ac[j]) {
        for (int k = i + 1; k < j; k++) {
          if (!ac[k]) {
            return "Yes";
          }
        }
      }
    }
  }
  return "No";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << solve() << '\n';
  return 0;
}