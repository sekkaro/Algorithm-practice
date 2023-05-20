#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define M 2e5 + 1

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<multiset<int>> s(n + 1);
    vector<set<int>> sr(M);
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i, j;
            cin >> i >> j;
            s[j].insert(i);
            sr[i].insert(j);
        }
        else if (t == 2)
        {
            int i;
            cin >> i;
            for (auto itr : s[i])
                cout << itr << ' ';
            cout << '\n';
        }
        else
        {
            int i;
            cin >> i;
            for (auto itr : sr[i])
                cout << itr << ' ';
            cout << '\n';
        }
    }
    return 0;
}