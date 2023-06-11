#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ans = INT_MAX;
        rep(i, 26)
        {
            int curr = 0, cnt = 0, ok = 0;
            rep(j, n)
            {
                if (s[j] - 'a' != i)
                    cnt++;
                else
                {
                    int res = cnt > 0 ? log2(cnt) + 1 : cnt;
                    curr = max(curr, res);
                    ok = 1;
                    cnt = 0;
                }
            }
            if (ok)
            {
                int res = cnt > 0 ? log2(cnt) + 1 : cnt;
                curr = max(curr, res);
                ans = min(ans, curr);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}