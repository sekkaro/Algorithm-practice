#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    queue<int> qq;
    rep(i, n) qq.push(i + 1);
    set<int> called;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x = qq.front();
            qq.pop();
            called.insert(x);
        }
        else if (t == 2)
        {
            int x;
            cin >> x;
            called.erase(x);
        }
        else
        {
            cout << *called.begin() << '\n';
        }
    }
    return 0;
}