#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> p(n + 1, 0);
    while (q--)
    {
        int t, x;
        cin >> t >> x;
        if (t == 1)
            p[x]++;
        else if (t == 2)
            p[x] += 2;
        else if (p[x] >= 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}