#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(5 * n);
    rep(i, 5 * n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    rep(i, 3 * n)
    {
        ans += a[n + i];
    }
    printf("%.5f", 1.0 * ans / (3 * n));
    return 0;
}