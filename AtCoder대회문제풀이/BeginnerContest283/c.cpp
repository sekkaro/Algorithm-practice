#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] - '0' == 0 && s[i] - '0' == 0)
        {
            cnt++;
            i++;
        }
    }
    cout << n - cnt << '\n';
    return 0;
}