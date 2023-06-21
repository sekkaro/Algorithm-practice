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
        vector<int> cnt(100, 0);
        rep(i, n)
        {
            cnt[a[i]]++;
        }
        int ok = 1;
        for (int i = 99; i > 0; i--)
        {
            if (cnt[i] > cnt[i - 1])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}