#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> a(n);
    rep(i, n) cin >> s[i] >> a[i];
    int idx = 0, minn = INT_MAX;
    rep(i, n)
    {
        if (a[i] < minn)
        {
            idx = i;
            minn = a[i];
        }
    }
    int cnt = 0;
    while (cnt < n)
    {
        cout << s[idx] << '\n';
        idx = (idx + 1) % n;
        cnt++;
    }
    return 0;
}