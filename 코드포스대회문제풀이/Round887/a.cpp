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
        int diff = INT_MAX;
        rep(i, n - 1) diff = min(diff, a[i + 1] - a[i]);
        if (diff >= 0)
            cout << diff / 2 + 1 << '\n';
        else
            cout << "0\n";
    }
    return 0;
}