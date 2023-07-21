#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int mn = INT_MAX;
    rep(i, n)
    {
        rep(j, n)
        {
            if (i == j)
                continue;
            mn = min(mn, gcd(a[i], a[j]));
        }
    }
    return mn <= 2;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}