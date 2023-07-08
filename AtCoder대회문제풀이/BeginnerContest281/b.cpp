#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n != 8)
        return false;
    if (s[0] < 'A' || s[0] > 'Z' || s[n - 1] < 'A' || s[n - 1] > 'Z')
        return false;
    for (int i = 1; i < n - 1; i++)
    {
        if (i == 1 && s[i] == '0')
            return false;
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (solve())
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}