#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, q;
  cin >> n >> k >> q;
  map<int, int> cnt;
  vector<int> pos(k);
  for (int i = 0; i < k; i++) {
    cin >> pos[i];
    cnt[pos[i]]++;
  }
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    --x;
    if (pos[x] < n && !cnt[pos[x] + 1]) {
      cnt[pos[x] + 1]++;
      cnt[pos[x]]--;
      pos[x] += 1;
    }
  }
  for (int i = 0; i < k; i++) {
    cout << pos[i] << " ";
  }
  cout << endl;
  return 0;
}