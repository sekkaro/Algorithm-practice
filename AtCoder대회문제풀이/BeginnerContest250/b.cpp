#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b;
  cin >> n >> a >> b;
  char t[a * n + 1][b * n + 1];
  bool isWhite = true, prev = true;
  for (int i = 1; i <= a * n; i += a) {
    isWhite = prev;
    for (int j = 1; j <= b * n; j += b) {
      for (int k = i; k < i + a; k++) {
        for (int l = j; l < j + b; l++) {
          t[k][l] = isWhite ? '.' : '#';
        }
      }
      isWhite = !isWhite;
    }
    prev = !prev;
  }
  for (int i = 1; i <= a * n; i++) {
    for (int j = 1; j <= b * n; j++) {
      cout << t[i][j];
    }
    cout << '\n';
  }
  return 0;
}