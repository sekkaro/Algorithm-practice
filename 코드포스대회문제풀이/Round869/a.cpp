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
        int n, k;
        cin >> n >> k;
        vector<string> s(n);
        rep(i, n) cin >> s[i];
        int ans = 0;
        rep(i, n)
        {
            if (!s[0].compare(s[i]))
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}