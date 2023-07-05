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
        string s;
        cin >> s;
        vector<int> cnt(10);
        rep(i, 4) cnt[s[i] - '0']++;
        int mxc = *max_element(cnt.begin(), cnt.end());
        if (mxc == 4)
            cout << "-1\n";
        else if (mxc == 3)
            cout << "6\n";
        else
            cout << "4\n";
    }
    return 0;
}