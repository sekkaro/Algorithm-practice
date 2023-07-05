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
        int n, k;
        cin >> n >> k;
        vector<int> a(n, -5);
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j <= i && k > 0; j++, k--)
            {
                a[i] = 5 * j + 1;
            }
        }
        rep(i, n) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}