#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s, t;
    cin >> n >> s >> t;
    replace(s.begin(), s.end(), '0', 'o');
    replace(s.begin(), s.end(), '1', 'l');
    replace(t.begin(), t.end(), '0', 'o');
    replace(t.begin(), t.end(), '1', 'l');
    if (s.compare(t) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}