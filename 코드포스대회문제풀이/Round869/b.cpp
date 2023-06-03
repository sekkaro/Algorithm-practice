#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "1\n";
        }
        else if (n % 2 == 1)
        {
            cout << "-1\n";
        }
        else
        {
            vector<int> ans(n + 1);
            rep(i, n) ans[i] = i;
            rep(i, n - 1)
            {
                swap(ans[i], ans[i + 1]);
                i++;
            }
            rep(i, n)
            {
                cout << ans[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}