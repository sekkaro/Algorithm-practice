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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        int l = -1, r = -1;
        rep(i, n)
        {
            if (a[i] != b[i])
            {
                if (l == -1)
                    l = i;
                r = i;
            }
        }
        while (l > 0 && b[l] >= b[l - 1])
            l--;
        while (r < n - 1 && b[r] <= b[r + 1])
            r++;
        cout << l + 1 << ' ' << r + 1 << '\n';
    }
    return 0;
}