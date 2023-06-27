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
        int idx = 0;
        char c = 'z';
        for (int i = n - 1; i > 0; i--)
        {
            if (s[i] < c && s[i] <= s[0])
            {
                c = s[i];
                idx = i;
            }
        }
        string ans = "";
        rep(i, n)
        {
            if (i != idx)
                ans += s[i];
        }
        ans = s[idx] + ans;
        cout << ans << '\n';
    }
    return 0;
}