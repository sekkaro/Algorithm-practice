#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  set<string> st;
  for (int i = 0; i < m; i++) {
    string t;
    cin >> t;
    st.insert(t);
  }
  for (int i = 0; i < n; i++) {
    if (st.count(s[i])) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}