#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a % 3 == 0 || b - a > 1)
        cout << "No\n";
    else
        cout << "Yes\n";
    return 0;
}