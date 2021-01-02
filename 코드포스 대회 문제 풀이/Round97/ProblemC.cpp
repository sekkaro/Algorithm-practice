#include <bits/stdc++.h>
 
using namespace std;

#define N 201

int n, dp[N][N * 2], a[N];

int solve(int idx, int t){
	if(idx == n) return 0;
	if(t == 2 * n + 1) return 1e7;
	if(dp[idx][t] != -1) return dp[idx][t];
	dp[idx][t] = min(solve(idx + 1, t + 1) + abs(a[idx] - t), solve(idx, t + 1));
	return dp[idx][t];
}

int main(void){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= n * 2; j++){
				dp[i][j] = -1;
			}
		}
		int ans = solve(0, 1);
		cout << ans << '\n';
	}
	return 0;	
}
