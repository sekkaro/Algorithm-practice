#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  int a, b;
  cin >> s >> a >> b;
  a--;
  b--;
  char temp = s[a];
  s[a] = s[b];
  s[b] = temp;
  cout << s << endl;
  return 0;
}