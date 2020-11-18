#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;

#define MAX 200001

int a[MAX], b[MAX], d[MAX];

int solve(){
	int n, k;
	cin >> n >> k;
	vector<int> chk(n + 1);
	long long ans = 1;
	for(int i = 0; i < n; i++) cin >> a[i], d[a[i]] = i;
	for(int i = 0; i < k; i++) cin >> b[i];
	for(int i = k - 1; i >= 0; i--){
		chk[b[i]] = -1;
		int idx = d[b[i]], cnt = 0;
		if(idx > 0 && chk[a[idx - 1]] != -1) cnt++;
		if(idx < n - 1 && chk[a[idx + 1]] != -1) cnt++;
		ans = (ans * cnt) % 998244353;
		if(ans == 0) break;
	}
	return ans;
}
 
int main(void){
	int t;
	cin >> t;
	while(t--){
		int ans = solve();
		cout << ans << '\n';
	}
	return 0;
}
