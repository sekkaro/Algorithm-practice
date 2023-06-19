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
        string s, t;
        cin >> n >> s >> t;
        int cnt1 = 0, cnt2 = 0;
        rep(i, n)
        {
            if (s[i] != t[i])
                cnt1++;
            if (s[i] != t[n - i - 1])
                cnt2++;
        }
        int ans1 = 2 * cnt1 - (cnt1 % 2);
        int ans2 = max(2, 2 * cnt2 + (cnt2 % 2) - 1);
        cout << min(ans1, ans2) << '\n';
    }
    return 0;
}