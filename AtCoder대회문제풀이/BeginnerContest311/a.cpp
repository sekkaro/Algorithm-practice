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
    set<char> c;
    rep(i, n)
    {
        if (!c.count(s[i]))
            c.insert(s[i]);
        if (c.size() == 3)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    return 0;
}