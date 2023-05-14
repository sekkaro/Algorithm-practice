#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n - 1)
    {
        int j = a[i];
        while (j != a[i + 1])
        {
            cout << j << ' ';
            if (a[i] > a[i + 1])
                j--;
            else
                j++;
        }
    }
    cout << a[n - 1] << '\n';
    return 0;
}