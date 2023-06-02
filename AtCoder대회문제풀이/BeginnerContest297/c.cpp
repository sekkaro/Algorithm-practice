#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    rep(i, h)
    {
        rep(j, w - 1)
        {
            if (s[i][j] == 'T' && s[i][j + 1] == 'T')
            {
                s[i][j] = 'P';
                s[i][j + 1] = 'C';
            }
        }
    }
    rep(i, h)
    {
        cout << s[i] << '\n';
    }
    return 0;
}