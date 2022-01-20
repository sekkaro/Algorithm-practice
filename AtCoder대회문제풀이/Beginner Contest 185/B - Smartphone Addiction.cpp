#include <iostream>

using namespace std;

#define int long long

signed main(void){
	int n, m, t;
	cin >> n >> m >> t;
	int s = 0, c = n;
	bool ok = true;
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		for(int i = s; i < a; i++){
			n--;
			if(!n) ok = false;
		}
		for(int i = a; i < b; i++){
			if(n + 1 <= c) n++;
		}
		s = b;
	}
	for(int i = s; i < t; i++){
		n--;
		if(!n) ok = false;
	}
	if(ok) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
