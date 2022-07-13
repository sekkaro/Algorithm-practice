#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  char s1, s2, s3, t1, t2, t3;
  cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;
  int ok;
  if (t1 == s1) {
    if (t2 == s2) {
      ok = 1;
    } else {
      ok = 0;
    }
  } else if (t1 == s2) {
    if (t2 == s1) {
      ok = 0;
    } else {
      ok = 1;
    }
  } else {
    if (t2 == s1) {
      ok = 1;
    } else {
      ok = 0;
    }
  }
  if (ok)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}