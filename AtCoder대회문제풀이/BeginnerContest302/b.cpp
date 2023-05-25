#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int di[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dj[] = {-1, -1, 0, 1, 1, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    string S = "snuke";
    rep(i, h) cin >> s[i];
    rep(si, h)
    {
        rep(sj, w)
        {
            rep(v, 8)
            {
                int i = si, j = sj;
                rep(k, 5)
                {
                    if (i < 0 || j < 0 || i >= h || j >= w)
                        break;
                    if (s[i][j] != S[k])
                        break;
                    if (k == 4)
                    {
                        i = si, j = sj;
                        rep(l, 5)
                        {
                            printf("%d %d\n", i + 1, j + 1);
                            i += di[v];
                            j += dj[v];
                        }
                    }
                    i += di[v];
                    j += dj[v];
                }
            }
        }
    }
    return 0;
}