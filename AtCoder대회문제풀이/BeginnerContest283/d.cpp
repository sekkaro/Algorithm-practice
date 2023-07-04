#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve()
{

    string s;
    cin >> s;
    int n = s.size();
    vector<string> st;
    vector<int> cnt(26);
    int m = 0;
    rep(i, n)
    {
        if (s[i] == ')')
        {
            string t = st.back();
            st.pop_back();
            rep(j, t.size())
            {
                cnt[t[j] - 'a']--;
            }
            m--;
        }
        else if (s[i] == '(')
        {
            st.push_back("");
            m++;
        }
        else
        {
            if (cnt[s[i] - 'a'])
                return false;
            cnt[s[i] - 'a']++;
            if (m)
                st[m - 1] += s[i];
        }
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (solve())
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}