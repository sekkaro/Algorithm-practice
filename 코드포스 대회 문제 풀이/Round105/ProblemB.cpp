#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
bool valid(string s){
	int n = s.length();
	int sum1 = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '0') sum1++;
		else sum1--;
		if(sum1 < 0) return false;
	}
	return sum1 == 0;
} 
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, u, r, d, l;
		cin >> n >> u >> r >> d >> l;
		int counter = 0;
		for(int i = 0; i < 16; i++){
			int u1 = u, l1 = l, r1 = r, d1 = d;
			if(i & 1){
				u1--;
				l1--;
			}
			if(i & 2){
				u1--;
				r1--;
			}
			if(i & 4){
				r1--;
				d1--;
			}
			if(i & 8){
				l1--;
				d1--;
			}
			int counter1 = 1;
			vector<int> v1 = {l1, d1, r1, u1};
			for(auto j: v1){
				if(!(j >= 0 && j <= n - 2)){
					counter1 = 0;
					break;
				}
			}
			if(counter1 == 1){
				counter = 1;
				break;
			}
		}
		cout << (counter == 1 ? "YES\n": "NO\n");
	}
	return 0;
}
