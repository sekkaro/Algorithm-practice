#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<P> xy;
    int x = 0, y = 0, ok = 0;
    xy.emplace(x, y);
    rep(i, n)
    {
        if (s[i] == 'R')
            x++;
        if (s[i] == 'L')
            x--;
        if (s[i] == 'U')
            y++;
        if (s[i] == 'D')
            y--;
        if (xy.count({x, y}))
        {
            ok = 1;
            break;
        }
        xy.emplace(x, y);
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}