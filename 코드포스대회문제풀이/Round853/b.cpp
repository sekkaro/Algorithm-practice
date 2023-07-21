#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

string rev(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return t;
}

bool check(string s, int l, int r)
{
    string t = s;
    for (int i = l; i <= r; i++)
    {
        t[i] = (t[i] == '0') ? '1' : '0';
    }
    return !t.compare(rev(t));
}

bool solve()
{
    int n;
    string s;
    cin >> n >> s;
    if (!s.compare(rev(s)))
        return true;
    vector<int> a;
    rep(i, n / 2)
    {
        if (s[i] != s[n - i - 1])
            a.push_back(i);
    }
    return check(s, a[0], a[a.size() - 1]);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}