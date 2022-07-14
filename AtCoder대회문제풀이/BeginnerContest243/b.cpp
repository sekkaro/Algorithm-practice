#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  map<int, int> ac, bc;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ac[a[i]]++;
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    bc[b[i]]++;
  }
  int ans1 = 0, ans2 = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i]) {
      ans1++;
      ac[a[i]]--;
      bc[b[i]]--;
    }
  }
  for (int i = 0; i < n; i++) {
    if (ac[a[i]] && bc[a[i]])
      ans2++;
  }
  cout << ans1 << endl;
  cout << ans2 << endl;
  return 0;
}