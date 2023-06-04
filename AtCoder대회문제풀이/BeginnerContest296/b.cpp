#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> s(8);
    rep(i, 8) cin >> s[i];
    rep(i, 8)
    {
        rep(j, 8)
        {
            if (s[i][j] == '*')
            {
                cout << (char)('a' + j) << 8 - i << '\n';
                return 0;
            }
        }
    }
    return 0;
}