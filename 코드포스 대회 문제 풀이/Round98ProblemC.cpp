#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<pair<int, int>> count[4];
		//for(int i = 0; i < 4; i++) count[i].clear();
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(') count[0].push_back(make_pair(i, 1));
			else if(s[i] == ')') count[1].push_back(make_pair(i, 1));
			else if(s[i] == '[') count[2].push_back(make_pair(i, 1));
			else if(s[i == ']']) count[3].push_back(make_pair(i, 1));
		}
		int ans = 0, j = 0;
		for(int i = 0; i < count[0].size(); i++){
			for(; j < count[1].size(); j++){
				if(count[1][j].second && count[0][i].first < count[1][j].first){
					count[1][j].second--;
					ans++;
					break;
				}
			}
		}
		j = 0;
		for(int i = 0; i < count[2].size(); i++){
			for(; j < count[3].size(); j++){
				if(count[3][j].second && count[2][i].first < count[3][j].first){
					count[3][j].second--;
					ans++;
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
