#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    rep(i, n) rep(j, n)
    {
        if (i == j)
            continue;
        string t = s[i] + s[j];
        int m = t.size();
        bool ok = true;
        rep(k, m) if (t[k] != t[m - 1 - k]) ok = false;
        if (ok)
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}