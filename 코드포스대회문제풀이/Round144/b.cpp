#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

string solve()
{

    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    if (a[0] == b[0])
        return string(1, a[0]) + "*";
    if (a[n - 1] == b[m - 1])
        return "*" + string(1, a[n - 1]);
    string ans, curr;
    int i = 0, j = 0;
    rep(i, n)
    {
        rep(j, m)
        {
            if (a[i] != b[j])
                continue;
            int k = i, l = j;
            string curr;
            while (k < n && l < m && a[k] == b[l])
            {
                curr += a[k];
                k++;
                l++;
            }
            if (curr.size() > ans.size())
                ans = curr;
        }
    }
    if (ans.size() > 1)
        return "*" + ans + "*";
    return "";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string ans = solve();
        if (ans.size())
        {
            cout << "YES\n";
            cout << ans << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}