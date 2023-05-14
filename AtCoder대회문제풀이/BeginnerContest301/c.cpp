#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    map<char, int> sm, tm;
    int sc = 0, tc = 0;
    rep(i, s.size())
    {
        if (s[i] == '@')
            sc++;
        else
            sm[s[i]]++;
    }
    rep(i, t.size())
    {
        if (t[i] == '@')
            tc++;
        else
            tm[t[i]]++;
    }
    int ok = 1;
    string w = "atcoder";
    for (auto p : sm)
    {
        if (tm[p.first] >= p.second)
            continue;
        int diff = p.second - tm[p.first];
        if (tc < diff || w.find(p.first) == string::npos)
        {
            ok = 0;
            break;
        }
        tm[p.first] += diff;
        tc -= diff;
    }
    for (auto p : tm)
    {
        if (sm[p.first] >= p.second)
            continue;
        int diff = p.second - sm[p.first];
        if (sc < diff || w.find(p.first) == string::npos)
        {
            ok = 0;
            break;
        }
        sm[p.first] += diff;
        sc -= diff;
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}