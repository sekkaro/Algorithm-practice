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
        int n, m, x1, x2, y1, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        int path1 = 0, path2 = 0;
        if (x1 - 1 >= 1)
            path1++;
        if (x1 + 1 <= n)
            path1++;
        if (y1 - 1 >= 1)
            path1++;
        if (y1 + 1 <= m)
            path1++;

        if (x2 - 1 >= 1)
            path2++;
        if (x2 + 1 <= n)
            path2++;
        if (y2 - 1 >= 1)
            path2++;
        if (y2 + 1 <= m)
            path2++;

        cout << min(path1, path2) << '\n';
    }
    return 0;
}