#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    rep(i, n)
    {
        if (binary_search(a.begin(), a.end(), a[i] - x))
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}