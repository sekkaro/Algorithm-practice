#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        vector<int> sa = a;
        sort(sa.begin(), sa.end());
        int mex = 0;
        rep(i, n)
        {
            if (sa[i] == mex)
                mex++;
        }
        mex++;
        if (mex == 1)
        {
            cout << "Yes\n";
            continue;
        }
        int ok = 0;
        if (find(a.begin(), a.end(), mex) != a.end())
        {
            int l = -1, r;
            rep(i, n)
            {
                if (a[i] == mex)
                {
                    if (l == -1)
                        l = i;
                    r = i;
                }
            }
            for (int i = l; i <= r; i++)
            {
                a[i] = mex - 1;
            }
            sort(a.begin(), a.end());
            int tmex = 0;
            rep(i, n)
            {
                if (a[i] == tmex)
                    tmex++;
            }
            if (tmex == mex)
                ok = 1;
        }
        else
        {
            rep(i, n - 1)
            {
                if (sa[i] == sa[i + 1])
                {
                    ok = 1;
                    break;
                }
            }
            if (sa[n - 1] > mex)
                ok = 1;
        }
        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}