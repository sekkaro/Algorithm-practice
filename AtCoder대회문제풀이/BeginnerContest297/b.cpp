#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string t = "RKR";
    int idx = 0;
    vector<int> B;
    rep(i, s.size())
    {
        if (t[idx] == s[i] && idx < t.size())
            idx++;
        if (s[i] == 'B')
            B.push_back(i + 1);
    }
    if (idx == t.size() && B[0] % 2 != B[1] % 2)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}