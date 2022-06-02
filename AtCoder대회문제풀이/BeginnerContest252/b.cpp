#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  int MAX = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    MAX = max(MAX, a[i]);
  }
  int flag = 0;
  for (int i = 0; i < k; i++) {
    int b;
    cin >> b;
    if (a[b] == MAX)
      flag = 1;
  }
  if (flag)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}