#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char p, q;
    cin >> p >> q;
    int d[] = {3, 1, 4, 1, 5, 9};
    if (p > q)
        swap(p, q);
    int ans = 0;
    for (int i = p - 'A'; i < q - 'A'; i++)
    {
        ans += d[i];
    }
    cout << ans << '\n';
    return 0;
}