#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    rep(qi, q)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int k, x;
            cin >> k >> x;
            k--;
            a[k] = x;
        }
        else
        {
            int k;
            cin >> k;
            k--;
            cout << a[k] << '\n';
        }
    }
    return 0;
}