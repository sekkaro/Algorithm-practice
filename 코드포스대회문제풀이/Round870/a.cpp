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
        cin >> n;
        vector<int> l(n);
        rep(i, n) cin >> l[i];
        int ans = -1;
        rep(i, n + 1)
        {
            int cnt = 0;
            rep(j, n)
            {
                if (l[j] > i)
                    cnt++;
            }
            if (cnt == i)
            {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}