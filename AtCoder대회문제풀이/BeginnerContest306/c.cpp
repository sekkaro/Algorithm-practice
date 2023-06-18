#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> cnt(n + 1, 0), ans;
    rep(i, 3 * n)
    {
        int a;
        cin >> a;
        cnt[a]++;
        if (cnt[a] == 2)
        {
            ans.push_back(a);
        }
    }
    rep(i, n)
    {
        cout << ans[i] << ' ';
    }
    cout << '\n';
    return 0;
}