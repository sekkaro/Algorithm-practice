#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<int, int> cnt;
  int a = 1;
  while (a) {
    for (int i = 1; i <= 2 * n + 1; i++) {
      if (!cnt[i]) {
        cnt[i]++;
        cout << i << '\n';
        break;
      }
    }
    cout.flush();
    cin >> a;
    cnt[a]++;
  }
  return 0;
}