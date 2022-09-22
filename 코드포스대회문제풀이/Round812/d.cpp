#include <bits/stdc++.h>
using namespace std;

int ask(vector<int> &k) {
  cout << "? " << k[0] << ' ' << k[2] << endl;
  int x;
  cin >> x;
  if (x == 1) {
    cout << "? " << k[0] << ' ' << k[3] << endl;
    int y;
    cin >> y;
    if (y == 1)
      return k[0];
    return k[3];
  } else if (x == 2) {
    cout << "? " << k[2] << ' ' << k[1] << endl;
    int y;
    cin >> y;
    if (y == 1)
      return k[2];
    return k[1];
  } else {
    cout << "? " << k[1] << ' ' << k[3] << endl;
    int y;
    cin >> y;
    if (y == 1)
      return k[1];
    return k[3];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 1; i <= (1 << n); i++) {
      a.push_back(i);
    }
    while (a.size() > 2) {
      while (!a.empty()) {
        vector<int> k(4);
        k[0] = a.back();
        a.pop_back();
        k[1] = a.back();
        a.pop_back();
        k[2] = a.back();
        a.pop_back();
        k[3] = a.back();
        a.pop_back();
        int win = ask(k);
        b.push_back(win);
      }
      a = b;
      b.clear();
    }
    if (a.size() == 2) {
      cout << "? " << a[0] << ' ' << a[1] << endl;
      int x;
      cin >> x;
      if (x == 2)
        a[0] = a[1];
    }
    cout << "! " << a[0] << endl;
    cout.flush();
  }
  return 0;
}