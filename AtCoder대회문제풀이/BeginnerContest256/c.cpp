#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h1, h2, h3, w1, w2, w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
  int ans = 0;
  for (int s1 = 1; s1 <= 30; s1++) {
    for (int s2 = 1; s2 <= 30; s2++) {
      for (int s4 = 1; s4 <= 30; s4++) {
        for (int s5 = 1; s5 <= 30; s5++) {
          int s3 = h1 - (s1 + s2);
          int s6 = h2 - (s4 + s5);
          int s7 = w1 - (s1 + s4);
          int s8 = w2 - (s2 + s5);
          int s9_1 = h3 - (s7 + s8);
          int s9_2 = w3 - (s3 + s6);
          if (s3 > 0 && s6 > 0 && s7 > 0 && s8 > 0 && s9_1 > 0 && s9_2 > 0 &&
              s9_1 == s9_2) {
            ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}