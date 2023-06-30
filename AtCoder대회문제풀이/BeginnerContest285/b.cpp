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
    for (int i = 1; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
            {
                if (s[j] == s[j + i])
                    break;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}