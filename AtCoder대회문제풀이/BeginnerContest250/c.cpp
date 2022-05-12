#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n + 1), p(n + 1);
  for (int i = 1; i <= n; i++) {
    a[i] = i;
    p[i] = i;
  }
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    if (p[x] < n) {
      int temp = a[p[x] + 1];
      a[p[x] + 1] = a[p[x]];
      a[p[x]] = temp;
      p[x]++;
      p[temp]--;
    } else {
      int temp = a[p[x] - 1];
      a[p[x] - 1] = a[p[x]];
      a[p[x]] = temp;
      p[x]--;
      p[temp]++;
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}