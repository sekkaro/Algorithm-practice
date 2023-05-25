#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = unsigned long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    cout << (a / b) + (a % b > 0) ? 1 : 0 << '\n';
    return 0;
}