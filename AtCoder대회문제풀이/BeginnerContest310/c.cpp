#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    set<string> ss;
    rep(i, n)
    {
        string t = s[i];
        reverse(t.begin(), t.end());
        if (!ss.count(s[i]) && !ss.count(t))
            ss.insert(s[i]);
    }
    cout << ss.size() << '\n';
    return 0;
}