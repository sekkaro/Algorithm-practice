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
        int n, k;
        cin >> n >> k;
        vector<int> p(n + 1);
        rep(i, n) cin >> p[i];
        int cnt = 0;
        rep(i, n)
        {
            if (abs(p[i] - i) % k != 0)
                cnt++;
        }
        if (!cnt)
            cout << "0\n";
        else if (cnt == 2)
            cout << "1\n";
        else
            cout << "-1\n";
    }
    return 0;
}