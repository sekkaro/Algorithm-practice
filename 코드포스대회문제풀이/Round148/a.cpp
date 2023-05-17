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
        map<char, int> sm;
        rep(i, s.size()) sm[s[i]]++;
        int cnt = 0;
        for (auto p : sm)
        {
            if (p.second > 1)
                cnt++;
        }
        if (cnt > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}