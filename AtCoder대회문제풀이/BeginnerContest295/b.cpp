#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, c;
  cin >> r >> c;
  vector<string> b(r);
  for (int i = 0; i < r; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (b[i][j] != '.' && b[i][j] != '#') {
        for (int k = 0; k < r; k++) {
          for (int l = 0; l < c; l++) {
            if (b[k][l] == '#' && abs(i - k) + abs(j - l) <= b[i][j] - '0')
              b[k][l] = '.';
          }
        }
        b[i][j] = '.';
      }
    }
  }
  for (int i = 0; i < r; i++) {
    cout << b[i] << '\n';
  }
  return 0;
}