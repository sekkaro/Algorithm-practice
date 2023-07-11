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
        sort(a.rbegin(), a.rend());
        int cnt = 0;
        rep(i, n)
        {
            if (a[i] > 0)
                cout << ++cnt << ' ';
            else
                cout << --cnt << ' ';
        }
        cout << '\n';
        cnt = 0;
        rep(i, n) rep(j, i) if (a[i] == -a[j]) cnt++;
        int ans = 0;
        rep(i, n)
        {
            if (i & 1 && cnt)
            {
                cout << --ans << ' ';
                --cnt;
            }
            else
                cout << ++ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}