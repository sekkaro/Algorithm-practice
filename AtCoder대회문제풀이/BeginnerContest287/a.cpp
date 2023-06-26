#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt = 0;
    rep(i, n)
    {
        string s;
        cin >> s;
        if (!s.compare("For"))
            cnt++;
    }
    if (cnt > n / 2)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}