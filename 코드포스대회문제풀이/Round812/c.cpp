#include <bits/stdc++.h>
using namespace std;

#define M 200005

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> sq(M);
  for (int i = 0; i * i < M; i++) {
    sq[i * i]++;
  }
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      a[i] = i;
    }
    for (int i = n - 1; i >= 0; i--) {
      if (sq[a[i] + i])
        continue;
      for (int j = i - 1; j >= 0; j--) {
        if (a[j] == j && sq[a[j] + i] && sq[a[i] + j]) {
          swap(a[i], a[j]);
          break;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}