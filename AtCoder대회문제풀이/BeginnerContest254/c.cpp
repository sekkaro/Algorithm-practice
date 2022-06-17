#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<vector<int>> b(k);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i % k].push_back(a[i]);
  }
  for (int i = 0; i < k; i++) {
    sort(b[i].begin(), b[i].end());
    for (int j = 0; j < b[i].size(); j++) {
      a[i + (j * k)] = b[i][j];
    }
  }
  int flag = 1;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      flag = 0;
      break;
    }
  }
  if (flag)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}