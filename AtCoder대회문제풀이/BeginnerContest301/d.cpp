#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    ll n;
    cin >> s >> n;
    auto ten = [&](string s)
    {
        ll x = 0;
        for (char c : s)
            x = x * 2 + (c - '0');
        return x;
    };
    auto f = [&](string s)
    {
        rep(i, s.size())
        {
            if (s[i] == '?')
                s[i] = '0';
        }
        return ten(s) <= n;
    };
    if (!f(s))
    {
        cout << "-1\n";
        return 0;
    }
    rep(i, s.size())
    {
        if (s[i] == '?')
        {
            s[i] = '1';
            if (!f(s))
                s[i] = '0';
        }
    }
    cout << ten(s) << '\n';
    return 0;
}