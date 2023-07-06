#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    rep(i, n)
    {
        if (s[i] == '"')
            cnt++;
        if (cnt % 2 == 0 && s[i] == ',')
            s[i] = '.';
    }
    cout << s << '\n';
    return 0;
}