#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int na = 0;
        vector<int> ans;
        if (k == 1 && k == x)
        {
            cout << "NO\n";
            continue;
        }
        while (na < n)
        {
            if (n - na <= k && n - na != x)
            {
                ans.push_back(n - na);
                na = n;
                break;
            }
            rep1(i, k)
            {
                if (i == x)
                    continue;
                na += i;
                ans.push_back(i);
                break;
            }
        }
        if (na == n)
        {
            cout << "YES\n";
            cout << ans.size() << '\n';
            rep(i, ans.size()) cout << ans[i] << ' ';
            cout << '\n';
        }
        else
            cout << "NO\n";
    }
    return 0;
}