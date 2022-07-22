#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  int ok = 1;
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    if (!cnt[x])
      ok = 0;
    else
      cnt[x]--;
  }
  if (ok)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}