#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, h, k;
    string s;
    cin >> n >> m >> h >> k >> s;
    set<P> xy;
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        xy.emplace(x, y);
    }
    int xi = 0, yi = 0, ok = 1;
    rep(i, n)
    {
        if (s[i] == 'R')
            xi++;
        else if (s[i] == 'U')
            yi++;
        else if (s[i] == 'D')
            yi--;
        else
            xi--;
        h--;
        if (h < 0)
        {
            ok = 0;
            break;
        }
        if (xy.count(P(xi, yi)) && h < k)
        {
            h = k;
            xy.erase(P(xi, yi));
        }
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}