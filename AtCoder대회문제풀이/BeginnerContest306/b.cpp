#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = unsigned long long int;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    rep(i, 64)
    {
        char c;
        cin >> c;
        s += c;
    }
    reverse(s.begin(), s.end());
    bitset<64> ans(s);
    cout << ans.to_ullong() << '\n';
    return 0;
}