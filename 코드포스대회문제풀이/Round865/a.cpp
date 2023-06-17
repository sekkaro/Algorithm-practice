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
        int x, y;
        cin >> x >> y;
        cout << "2\n";
        cout << x - 1 << ' ' << 1 << '\n';
        cout << x << ' ' << y << '\n';
    }
    return 0;
}