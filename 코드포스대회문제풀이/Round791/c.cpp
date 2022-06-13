#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int init(vector<int> &tree, int start, int end, int node) {
  if (start == end)
    return tree[node] = 0;
  int mid = (start + end) / 2;
  return tree[node] = init(tree, start, mid, node * 2) +
                      init(tree, mid + 1, end, node * 2 + 1);
}

int sum(vector<int> &tree, int start, int end, int node, int left, int right) {
  if (left > end || right < start)
    return 0;
  if (left <= start && end <= right)
    return tree[node];
  int mid = (start + end) / 2;
  return sum(tree, start, mid, node * 2, left, right) +
         sum(tree, mid + 1, end, node * 2 + 1, left, right);
}

void update(vector<int> &tree, int start, int end, int node, int index,
            int dif) {
  if (index < start || index > end)
    return;
  tree[node] += dif;
  if (start == end)
    return;
  int mid = (start + end) / 2;
  update(tree, start, mid, node * 2, index, dif);
  update(tree, mid + 1, end, node * 2 + 1, index, dif);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> xtree(4 * n + 1), ytree(4 * n + 1);
  map<int, int> xm, ym;
  init(xtree, 1, n, 1);
  init(ytree, 1, n, 1);
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      int x, y;
      cin >> x >> y;
      if (!xm[x])
        update(xtree, 1, n, 1, x, 1);
      if (!ym[y])
        update(ytree, 1, n, 1, y, 1);
      xm[x]++;
      ym[y]++;
    } else if (t == 2) {
      int x, y;
      cin >> x >> y;
      if (xm[x] == 1)
        update(xtree, 1, n, 1, x, -1);
      if (ym[y] == 1)
        update(ytree, 1, n, 1, y, -1);
      xm[x]--;
      ym[y]--;
    } else {
      int x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;
      if (x2 - x1 + 1 == sum(xtree, 1, n, 1, x1, x2) ||
          y2 - y1 + 1 == sum(ytree, 1, n, 1, y1, y2))
        cout << "Yes\n";
      else
        cout << "No\n";
    }
  }
  return 0;
}