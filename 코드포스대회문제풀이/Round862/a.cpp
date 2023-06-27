#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, 1 << 8)
    {
        int sum = 0;
        rep(j, n)
        {
            sum ^= (a[j] ^ i);
        }
        if (!sum)
        {
            cout << i << '\n';
            return true;
        }
    }
    return false;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        if (!solve())
            cout << -1 << '\n';
    }
    return 0;
}