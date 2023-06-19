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
        string L, R;
        cin >> L >> R;
        int ln = L.size(), rn = R.size();
        if (ln < rn)
        {
            string t;
            rep(i, rn - ln) t += '0';
            t += L;
            swap(t, L);
        }
        int ans = 0, flag = 0;
        rep(i, rn)
        {
            int l = L[i] - '0';
            int r = R[i] - '0';
            int diff = abs(l - r);
            if (!flag)
                ans += abs(l - r);
            else
            {
                ans += 9;
                diff = 9;
            }
            if (diff > 0)
                flag = 1;
        }
        cout << ans << '\n';
    }
    return 0;
}