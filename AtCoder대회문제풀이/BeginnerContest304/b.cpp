#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = stoi(s);
    int coef = pow(10, max(0, (int)s.size() - 3));
    cout << n / coef * coef << '\n';
    return 0;
}