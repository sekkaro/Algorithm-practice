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
        int cnt0 = 0, cnt1 = 0;
        vector<int> b;
        rep(i, n)
        {
            if (!a[i])
                cnt0++;
            else
            {
                cnt1++;
                b.push_back(a[i]);
            }
        }
        if (!cnt1)
            cout << "1\n";
        else if (cnt1 + 1 >= cnt0)
            cout << "0\n";
        else if (*max_element(b.begin(), b.end()) == 1)
            cout << "2\n";
        else
            cout << "1\n";
    }
    return 0;
}