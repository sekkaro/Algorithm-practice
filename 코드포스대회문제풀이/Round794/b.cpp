#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    map<int, int> cnt;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if(!cnt[a[i]] && a[i] > a[i + 1]) {
            cnt[a[i]]++;
            cnt[a[i + 1]]++;
            ans++;
        }
    }
    cout << ans << endl;
  }
  return 0;
}