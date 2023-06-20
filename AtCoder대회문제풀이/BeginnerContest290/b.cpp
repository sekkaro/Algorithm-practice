#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    string s;
    cin >> n >> k >> s;
    rep(i, n)
    {
        if (s[i] == 'o')
        {
            if (k <= 0)
            {
                s[i] = 'x';
            }
            k--;
        }
    }
    cout << s << '\n';
    return 0;
}