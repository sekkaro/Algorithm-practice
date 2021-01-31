#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> dp(2, 1);
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		vector<int> p(2);
		swap(dp, p);
		for(int j = 0; j < 2; j++){
			for(int x = 0; x < 2; x++){
				int nj = j;
				if(s == "AND") nj &= x;
				else nj |= x;
				dp[nj] += p[j];
			}
		}
	}
	cout << dp[1] << '\n';
	return 0;
}
