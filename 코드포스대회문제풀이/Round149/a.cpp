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
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
            printf("1\n%d\n", x);
        else
        {
            for (int i = 1; i <= x; i++)
            {
                if (i % k != 0 && (x - i) % k != 0)
                {
                    printf("2\n%d %d\n", i, x - i);
                    break;
                }
            }
        }
    }
    return 0;
}