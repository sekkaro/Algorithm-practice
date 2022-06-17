#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i)
        a[i][j] = 1;
      else
        a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}