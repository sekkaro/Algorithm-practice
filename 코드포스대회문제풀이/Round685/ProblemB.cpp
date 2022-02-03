#include <iostream>
#include <string>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		string s;
		cin >> s;
		while(q--){
			int l, r;
			cin >> l >> r;
			l--;
			r--;
			int left = l, right = r;
			for(int i = 0; i < l; i++){
				if(s[i] == s[l]){
					left = i;
					break;
				}
			}
			for(int i = n - 1; i > r; i--){
				if(s[i] == s[r]){
					right = i;
					break;
				}
			}
			if(left < l || right > r) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
