#include <bits/stdc++.h>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		int idx = 0;
		for(int i = n - 1; i >= 0; i--){
			if(s[i] != ')'){
				idx = i + 1;
				break;
			}
		}
		if(n - idx > idx) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
