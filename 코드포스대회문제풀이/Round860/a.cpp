#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        int ok = 0;
        rep(i, n - 1)
        {
            if (a[i] > a[n - 1] || b[i] > b[n - 1])
                swap(a[i], b[i]);
        }
        if ((a[n - 1] == *max_element(a.begin(), a.end()) && b[n - 1] == *max_element(b.begin(), b.end())) || (b[n - 1] >= *max_element(a.begin(), a.end()) && a[n - 1] >= *max_element(b.begin(), b.end())))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}