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
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        int ans = 0;
        rep(i, n)
        {
            if (a[i] < 0)
                ans = a[i];
        }
        if (!ans)
            cout << *max_element(a.begin(), a.end()) << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}