#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n, -1);
    multiset<int> s, ss;
    ll sum = 0;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        --x;
        if (a[x] != -1)
        {
            int py = a[x];
            if (s.find(py) != s.end())
            {
                s.insert(y);
                s.erase(s.find(py));
                sum += y - py;
            }
            else
            {
                ss.insert(y);
                ss.erase(ss.find(py));
            }
        }
        else if (s.size() < k)
        {
            s.insert(y);
            sum += y;
        }
        else
        {
            ss.insert(y);
        }
        if (!s.empty() && !ss.empty() && *s.begin() < *ss.rbegin())
        {
            sum += *ss.rbegin() - *s.begin();
            ss.insert(*s.begin());
            s.erase(s.begin());
            s.insert(*ss.rbegin());
            ss.erase(--ss.end());
        }
        cout << sum << '\n';
        a[x] = y;
    }
    return 0;
}