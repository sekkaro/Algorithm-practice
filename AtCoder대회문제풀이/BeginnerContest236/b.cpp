#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> c(n + 1);
  for (int i = 0; i < 4 * n - 1; i++) {
    int a;
    cin >> a;
    c[a]++;
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (c[i] == 3)
      cout << i << endl;
  }
  return 0;
}