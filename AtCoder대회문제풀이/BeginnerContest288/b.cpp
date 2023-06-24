#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    sort(s.begin(), s.begin() + k);
    rep(i, k) cout << s[i] << '\n';
    return 0;
}