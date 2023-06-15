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
        int q;
        cin >> q;
        int MIN = -1, MAX = -1, flag = 0;
        vector<int> ans(q, 0);
        rep(i, q)
        {
            int x;
            cin >> x;
            if (MIN == -1)
                MIN = x;
            if (!flag && x >= MAX)
            {
                MAX = x;
                ans[i] = 1;
            }
            else if (!flag && x <= MIN)
            {
                swap(MIN, MAX);
                MIN = x;
                flag = 1;
                ans[i] = 1;
            }
            else if (flag && x <= MAX && x >= MIN)
            {
                MIN = x;
                ans[i] = 1;
            }
        }
        rep(i, q) cout << ans[i];
        cout << '\n';
    }
    return 0;
}