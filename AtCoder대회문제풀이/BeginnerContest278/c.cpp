#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    set<P> s;
    rep(qi, q)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1)
            s.emplace(a, b);
        else if (t == 2)
            s.erase(P(a, b));
        else if (s.count(P(a, b)) && s.count(P(b, a)))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}