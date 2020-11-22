#include <iostream>
#include <string>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;
		string s;
		cin >> s;
		int cost = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == '0'){
				if(c0 > h + c1) cost += h + c1;
				else cost += c0;
			} else if(s[i] == '1') {
				if(c1 > h + c0) cost += h + c0;
				else cost += c1;
			}
		}
		cout << cost << '\n';
	}
	return 0;
}
