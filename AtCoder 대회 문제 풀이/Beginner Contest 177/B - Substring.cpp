#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s, t;
	cin >> s >> t;
	int ans = t.size();
	for(int i = 0; i <= s.size() - t.size(); i++){
		int sum = 0;
		for(int j = 0; j < t.size(); j++){
			if(s[i + j] != t[j]) sum++;
		}
		ans = min(ans, sum);
	}
	cout << ans << '\n';
	return 0;
}
