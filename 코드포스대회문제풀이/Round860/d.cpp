#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

bool solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    if (*max_element(a.begin(), a.end()) == 0)
        return false;
    vector<int> pos, neg;
    rep(i, n)
    {
        if (a[i] >= 0)
            pos.push_back(a[i]);
        else
            neg.push_back(a[i]);
    }
    ll sum = 0;
    vector<int> ans(n);
    rep(i, n)
    {
        int x;
        if (sum <= 0)
        {
            x = pos.back();
            pos.pop_back();
        }
        else
        {
            x = neg.back();
            neg.pop_back();
        }
        ans[i] = x;
        sum += ans[i];
    }
    cout << "Yes\n";
    rep(i, n) cout << ans[i] << ' ';
    cout << '\n';
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        if (!solve())
            cout << "No\n";
    }
    return 0;
}