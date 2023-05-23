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
        int n;
        cin >> n;
        vector<int> ans(n);
        int sum = 0;
        rep(i, n)
        {
            ans[i] = i + 1;
            sum += i + 1;
        }
        if (sum % n != 0)
            ans[0] += (sum % n);
        rep(i, n)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}