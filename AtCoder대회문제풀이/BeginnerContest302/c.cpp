#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    sort(s.begin(), s.end());
    do
    {
        int ok = 1;
        rep(i, n - 1)
        {
            int cnt = 0;
            rep(j, m)
            {
                if (s[i][j] != s[i + 1][j])
                    cnt++;
            }
            if (cnt != 1)
                ok = 0;
        }
        if (ok)
        {
            cout << "Yes\n";
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << "No\n";
    return 0;
}