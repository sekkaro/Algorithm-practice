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
    string ans;
    int cnt = 0;
    rep(i, n)
    {
        ans.push_back(s[i]);
        if (s[i] == '(')
            cnt++;
        if (s[i] == ')' && cnt)
        {
            while (ans.back() != '(')
                ans.pop_back();
            ans.pop_back();
            cnt--;
        }
    }
    cout << ans << '\n';
    return 0;
}