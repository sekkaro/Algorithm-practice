#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  const int M = 2000;
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  for (int i = 0; i <= M; i++) {
    if (!cnt[i]) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}