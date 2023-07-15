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
        int j = 0;
        rep(i, n)
        {
            while (i - j >= 0 && a[i - j] >= j + 1)
                j++;
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}