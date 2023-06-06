#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    vector<int> inf(n, 0);
    inf[0] = 1;
    auto solve = [&](int j, auto f) -> void
    {
        rep(i, n)
        {
            if (!inf[i] && sqrt((x[i] - x[j]) * (x[i] - x[j]) + ((y[i] - y[j]) * (y[i] - y[j]))) <= d)
            {
                inf[i] = 1;
                f(i, f);
            }
        }
    };
    solve(0, solve);
    rep(i, n)
    {
        if (inf[i])
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}