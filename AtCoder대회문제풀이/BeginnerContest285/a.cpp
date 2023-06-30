#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a * 2 == b || a * 2 + 1 == b)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}