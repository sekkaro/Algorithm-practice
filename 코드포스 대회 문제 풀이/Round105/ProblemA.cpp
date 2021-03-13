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
		string s;
		cin >> s;
		int n = s.length();
		int counter = 0;
		for(int i = 0; i < 8; i++){
			string s1 = s;
			for(int j = 0; j < n; j++){
				if(s1[j] == 'A'){
					s1[j] = (i & 1) ? '0' : '1';
				} else if(s1[j] == 'B'){
					s1[j] = (i & 2) ? '0' : '1';
				} else {
					s1[j] = (i & 4) ? '0' : '1';
				}
			}
			if(valid(s1)){
				counter = 1;
				cout << "YES\n";
				break;
			}
		}
		if(counter == 0) cout << "NO\n";
	}
	return 0;
}
