#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int solve() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int di[] = {1, 0, 1, -1};
  int dj[] = {0, 1, 1, 1};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < 4; k++) {
        int ni = i, nj = j;
        int cnt = 0;
        for (int l = 0; l < 6; l++) {
          if (ni < 0 || nj < 0 || ni >= n || nj >= n) {
            cnt = 3;
            break;
          }
          if (s[ni][nj] == '.')
            cnt++;
          ni += di[k];
          nj += dj[k];
        }
        if (cnt <= 2)
          return 1;
      }
    }
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  if (solve())
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}