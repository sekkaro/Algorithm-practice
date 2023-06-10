#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    rep(i, s.size() - 1)
    {
        swap(s[i], s[i + 1]);
        i++;
    }
    cout << s << '\n';
    return 0;
}