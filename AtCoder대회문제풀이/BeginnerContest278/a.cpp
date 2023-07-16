#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, k) a.push_back(0);
    for (int i = k; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}