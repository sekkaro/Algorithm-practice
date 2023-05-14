#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    vector<int> a, t;
    rep(i, n)
    {
        if (s[i] == 'A')
            a.push_back(i);
        else
            t.push_back(i);
    }
    int an = a.size(), tn = t.size();
    if (an > tn)
        cout << "A\n";
    else if (tn > an)
        cout << "T\n";
    else if (a[an - 1] < t[tn - 1])
        cout << "A\n";
    else
        cout << "T\n";
    return 0;
}