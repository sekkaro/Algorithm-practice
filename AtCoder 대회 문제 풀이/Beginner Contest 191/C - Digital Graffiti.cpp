#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	for(int i = 0; i < h; i++){
		cin >> s[i];
	}
	int ans = 0;
	for(int i = 0; i < h - 1; i++){
		for(int j = 0; j < w - 1; j++){
			int cnt = 0;
			for(int di = 0; di < 2; di++){
				for(int dj = 0; dj < 2; dj++){
					if(s[i + di][j + dj] == '#') cnt++;
				}
			}
			if(cnt == 1 || cnt == 3) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
