#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int ans = 1, curr = 1;
        rep(i, n - 1)
        {
            if (s[i] != s[i + 1])
                curr = 1;
            else
                curr++;
            ans = max(ans, curr);
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}