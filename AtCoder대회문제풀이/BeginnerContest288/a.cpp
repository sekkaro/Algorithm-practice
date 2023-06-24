#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}