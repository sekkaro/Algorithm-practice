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
        rep(j, w)
        {
            if (s[i][j] == '.')
            {
                int cnt = 0;
                if (i < h - 1 && s[i + 1][j] == '#')
                    cnt++;
                if (i > 0 && s[i - 1][j] == '#')
                    cnt++;
                if (j < w - 1 && s[i][j + 1] == '#')
                    cnt++;
                if (j > 0 && s[i][j - 1] == '#')
                    cnt++;
                if (cnt >= 2)
                {
                    cout << i + 1 << ' ' << j + 1 << '\n';
                    return 0;
                }
            }
        }
    }
    return 0;
}