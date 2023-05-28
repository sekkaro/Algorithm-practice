#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int valid(string s)
{
    int cnt = 0, n = s.size();
    rep(i, n)
    {
        if (s[i] == '(')
            cnt++;
        else
            cnt--;
        if (cnt < 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt1 = 0, cnt2 = 0;
        rep(i, n)
        {
            if (s[i] == '(')
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1 != cnt2)
        {
            cout << "-1\n";
            continue;
        }
        string rs = s;
        reverse(rs.begin(), rs.end());
        if (valid(s) || valid(rs))
        {
            cout << "1\n";
            rep(i, n) cout << "1 ";
            cout << "\n";
            continue;
        }
        vector<int> st, ans(n, 2);
        rep(i, n)
        {
            if (s[i] == '(')
                st.push_back(i);
            else if (st.size())
            {
                ans[st.back()] = 1;
                ans[i] = 1;
                st.pop_back();
            }
        }
        cout << "2\n";
        rep(i, n)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}