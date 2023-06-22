#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    rep(i, s.size())
    {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
    cout << s << '\n';
    return 0;
}