#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int ask(int x, int y)
{
    printf("? %d %d\n", x, y);
    fflush(stdout);
    int d;
    cin >> d;
    return d;
}

void ans(int x, int y)
{
    printf("! %d %d\n", x, y);
    fflush(stdout);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int d = ask(1, 1);
        if (d >= n)
        {
            int d1 = ask(1, d + 1);
            ans(d1 + 1, d + 1);
        }
        else if (d >= m)
        {
            int d1 = ask(d + 1, 1);
            ans(d + 1, d1 + 1);
        }
        else
        {
            int d1 = ask(1, d + 1);
            int d2 = ask(d + 1, 1);
            if (d == d1 && d1 == d2)
                ans(d + 1, d + 1);
            else if (d == d1)
                ans(d + 1, d2 + 1);
            else
                ans(d1 + 1, d + 1);
        }
    }
    return 0;
}