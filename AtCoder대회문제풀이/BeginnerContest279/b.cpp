#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    if (s.find(t) != string::npos)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}