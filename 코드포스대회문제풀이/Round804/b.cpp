#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int pattern[4][4] = {{1, 0, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 1}};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << pattern[i % 4][j % 4] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}