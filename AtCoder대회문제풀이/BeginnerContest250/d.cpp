#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define int long long

signed main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int M = 1e6;
  vector<bool> isP(M + 1, true);
  vector<int> primes;
  isP[0] = isP[1] = false;
  for (int i = 2; i <= M; i++) {
    if (!isP[i])
      continue;
    else
      primes.push_back(i);
    for (int j = i * i; j <= M; j += i) {
      isP[j] = false;
    }
  }

  vector<int> s(M + 1, 0);
  for (int p : primes)
    s[p]++;
  for (int i = 2; i <= M; i++)
    s[i] += s[i - 1];

  int n;
  cin >> n;
  int ans = 0;
  for (int q : primes) {
    int p = min(n / q / q / q, q - 1);
    ans += s[p];
  }
  cout << ans << endl;
  return 0;
}