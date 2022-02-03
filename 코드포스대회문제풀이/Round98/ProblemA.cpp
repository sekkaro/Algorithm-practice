#include <iostream>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		if(x == y || x == y + 1 || y == x + 1) cout << x + y << '\n';
		else if(x > y) cout << x * 2 - 1 << '\n';
		else cout << y * 2 - 1 << '\n';
	}
	return 0;
}
