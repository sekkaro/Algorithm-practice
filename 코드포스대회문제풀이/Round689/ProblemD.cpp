#include <iostream>
#include <algorithm>
#include <unordered_set>
 
using namespace std;
 
#define int long long
 
unordered_set<int> sums;
int a[100001];
 
void solve(int start, int end){
	int sum = 0, mid = (a[start] + a[end - 1]) / 2, idx = start;
	for(int i = start; i < end; i++){
		sum += a[i];
		if(a[i] <= mid) idx++;
	}
	sums.insert(sum);
	if(a[start] == a[end - 1]) return;
	if(idx == end) return;
	solve(start, idx);
	solve(idx, end);
}
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		solve(0, n);
		for(int i = 0; i < q; i++){
			int s;
			cin >> s;
			if(sums.count(s) == 1) cout << "Yes\n";
			else cout << "No\n";
		}
		sums.clear();
	}
	return 0;
}
