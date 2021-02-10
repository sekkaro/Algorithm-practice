#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int px, py;
		string s;
		cin >> px >> py >> s;
		int x = 0, y = 0;
		for(char c: s){
			if(c == 'U' && py > y) y++;
			else if(c == 'D' && py < y) y--;
			else if(c == 'R' && px > x) x++;
			else if(c == 'L' && px < x) x--;
		}
		if(x == px && y == py) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
