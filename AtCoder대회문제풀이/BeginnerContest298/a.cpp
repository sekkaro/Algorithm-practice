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
    int ok1 = 0, ok2 = 1;
    rep(i, n)
    {
        if (s[i] == 'o')
            ok1 = 1;
        else if (s[i] == 'x')
            ok2 = 0;
    }
    if (ok1 && ok2)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}