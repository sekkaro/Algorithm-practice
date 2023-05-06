#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    rep(i, h) cin >> a[i];
    rep(i, h) cin >> b[i];
    rep(s, 30)
    {
        rep(t, 30)
        {
            vector<string> an = a;
            rep(i, h)
            {
                rep(j, w)
                {
                    an[(i + s) % h][(j + t) % w] = a[i][j];
                }
            }
            if (an == b)
            {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
    return 0;
}