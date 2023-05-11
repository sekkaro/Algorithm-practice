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
        int n, m;
        cin >> n >> m;
        vector<int> b(n * m);
        rep(i, n * m) cin >> b[i];
        sort(b.begin(), b.end());
        if (m > n)
            swap(n, m);
        if (n == 1)
            cout << (b[m * n - 1] - b[0]) * (m - 1) << '\n';
        int ans1 = (b[m * n - 1] - b[0]) * (n * m - m) + ((b[m * n - 2] - b[0]) * (m - 1));
        int ans2 = (b[m * n - 1] - b[0]) * (n * m - m) + ((b[m * n - 1] - b[1]) * (m - 1));
        cout << max(ans1, ans2) << '\n';
    }
    return 0;
}