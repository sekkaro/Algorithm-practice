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
        string s;
        cin >> s;
        map<char, int> m;
        rep(i, s.size()) m[s[i]]++;
        if (m.size() > 1)
            cout << s.size() - 1 << '\n';
        else
            cout << "-1\n";
    }
    return 0;
}