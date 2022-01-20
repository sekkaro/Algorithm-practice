#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(void){
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 7; i <= n; i++){
		string s = to_string(i);
		size_t found = s.find("7");
		if(found != string::npos) ans++;
		else {
			int t = i;
			while(t){
				if(t % 8 == 7){
					ans++;
					break;
				}
				t /= 8;
			}	
		}
	}
	cout << n - ans << '\n';
	return 0;
}
