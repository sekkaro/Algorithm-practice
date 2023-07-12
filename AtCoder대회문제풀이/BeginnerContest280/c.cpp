#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int n = t.size();
    int ans = 1;
    for (int i = n - 1; i > 0; i--)
    {
        if (t[i] != s[i - 1])
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}