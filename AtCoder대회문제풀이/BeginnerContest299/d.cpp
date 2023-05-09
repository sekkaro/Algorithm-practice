#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int l = 1, r = n;
    while (l + 1 < r)
    {
        int m = (l + r) / 2;
        cout << "? " << m << endl;
        int p;
        cin >> p;
        if (p == 0)
            l = m;
        else
            r = m;
    }
    cout << "! " << l << '\n';
    return 0;
}