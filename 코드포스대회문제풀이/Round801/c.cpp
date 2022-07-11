#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

#define N 1010

int grid[N][N], mx[N][N], mn[N][N];

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
        cin >> grid[i][j];
      }
    }
    mx[0][0] = mn[0][0] = grid[0][0];
    for (int i = 1; i < n; i++) {
      mx[i][0] = mn[i][0] = mx[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < m; j++) {
      mx[0][j] = mn[0][j] = mx[0][j - 1] + grid[0][j];
    }
    for (int i = 1; i < n; i++) {
      for (int j = 1; j < m; j++) {
        mx[i][j] = max(mx[i - 1][j], mx[i][j - 1]) + grid[i][j];
        mn[i][j] = min(mn[i - 1][j], mn[i][j - 1]) + grid[i][j];
      }
    }
    if (mx[n - 1][m - 1] % 2 || mx[n - 1][m - 1] < 0 || mn[n - 1][m - 1] > 0)
      cout << "No\n";
    else
      cout << "Yes\n";
  }
  return 0;
}