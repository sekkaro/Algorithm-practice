#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int M = 1 << 8;

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
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        vector<bool> chk(M);
        chk[0] = true;
        int ans = 0, curr = 0;
        rep(i, n)
        {
            curr ^= a[i];
            rep(j, M)
            {
                if (chk[j])
                    ans = max(ans, curr ^ j);
            }
            chk[curr] = true;
        }
        cout << ans << '\n';
    }
    return 0;
}