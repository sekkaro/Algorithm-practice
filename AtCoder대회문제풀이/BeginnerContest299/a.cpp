#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;
    int m;
    rep(i, n)
    {
        if (s[i] == '|')
        {
            a.push_back(i);
        }
        else if (s[i] == '*')
        {
            m = i;
        }
    }
    if (m > a[0] && m < a[1])
        cout << "in\n";
    else
        cout << "out\n";
    return 0;
}