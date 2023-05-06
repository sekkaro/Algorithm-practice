#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> c(n);
  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (c[i] == a + b)
      cout << i + 1 << '\n';
  }
  return 0;
}