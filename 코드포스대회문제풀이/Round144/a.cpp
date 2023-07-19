#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int N = 100;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;
        string t;
        int i = 1, j = 0;
        while (j < N)
        {
            if (i % 3 == 0)
            {
                t += 'F';
                j++;
            }
            if (i % 5 == 0)
            {
                t += 'B';
                j++;
            }
            i++;
        }
        bool ok;
        rep(i, N - k)
        {
            ok = true;
            rep(j, k)
            {
                if (t[i + j] != s[j])
                    ok = false;
            }
            if (ok)
                break;
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}