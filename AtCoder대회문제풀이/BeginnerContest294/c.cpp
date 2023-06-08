#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    int i = 0, j = 0, idx = 1;
    vector<int> A(n), B(m);
    while (i < n || j < m)
    {
        if (i == n || (j < m && b[j] < a[i]))
        {
            B[j] = idx;
            j++;
        }
        else
        {
            A[i] = idx;
            i++;
        }
        idx++;
    }
    rep(i, n) cout << A[i] << ' ';
    cout << '\n';
    rep(i, m) cout << B[i] << ' ';
    return 0;
}