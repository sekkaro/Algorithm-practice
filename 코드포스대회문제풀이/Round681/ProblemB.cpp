#include <iostream>

#define N 100001

using namespace std;

int a, b, n, dp[N][2];
string s;

int solve(int idx, int blow){
	if(idx == n) return blow ? a: 0;
	if(dp[idx][blow] != -1) return dp[idx][blow];
	int ans;
	if(blow){
		if(s[idx] == '1') ans = solve(idx + 1, blow);
		else ans = min(a + solve(idx + 1, 0), b + solve(idx + 1, 1));
	} else {
		if(s[idx] == '1') ans = solve(idx + 1, 1);
		else ans = solve(idx + 1, 0);
	}
	return dp[idx][blow] = ans;
}

int main(void){
	int t;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cin >> s;
		n = s.length();
		for(int i = 0; i < n; i++) dp[i][0] = dp[i][1] = -1;
		cout << solve(0, 0) << '\n';
	}
	return 0;
}
