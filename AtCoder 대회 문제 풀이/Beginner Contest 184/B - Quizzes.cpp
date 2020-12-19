#include <iostream>

using namespace std;

int main(void){
	int n, x;
	string s;
	cin >> n >> x >> s;
	for(int i = 0; i < n; i++){
		if(s[i] == 'o') x++;
		else if(x) x--;
	}
	cout << x << '\n';
	return 0;
}
