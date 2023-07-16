#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, m;
    cin >> h >> m;
    while ((h / 10 == 2 && m / 10 >= 4) || h % 10 >= 6)
    {
        m++;
        if (m == 60)
        {
            m = 0;
            h++;
        }
        if (h == 24)
            h = 0;
    }
    cout << h << ' ' << m << '\n';
    return 0;
}