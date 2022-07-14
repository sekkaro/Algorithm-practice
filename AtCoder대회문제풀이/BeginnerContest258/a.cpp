#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k;
  cin >> k;
  if (k / 60 == 1)
    cout << "22:";
  else
    cout << "21:";
  if (k % 60 < 10)
    cout << "0";
  cout << k % 60 << endl;
  return 0;
}