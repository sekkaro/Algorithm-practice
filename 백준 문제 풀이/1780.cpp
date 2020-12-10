#include <iostream>

#define MAX 2187

using namespace std;

int a[MAX][MAX];
int c[3];

string solve(int n, int i, int j){
	if(n == 1){
		return to_string(a[i][j]);
	}
	string a = solve(n / 3, i, j);
	string b = solve(n / 3, i, j + n / 3);
	string c = solve(n / 3, i, j + n / 3 * 2);
	string d = solve(n / 3, i + n / 3, j);
	string e = solve(n / 3, i + n / 3, j + n / 3);
	string f = solve(n / 3, i + n / 3, j + n / 3 * 2);
	string g = solve(n / 3, i + n / 3 * 2, j);
	string h = solve(n / 3, i + n / 3 * 2, j + n / 3);
	string k = solve(n / 3, i + n / 3 * 2, j + n / 3 * 2);
	if(a == b && a == c && a == d && a == e && a == f && a == g && a == h && a == k && a.size() < 3){
		return a;
	}
	return a + b + c + d + e + f + g + h + k;
}

int main(void){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	string res = solve(n, 0, 0);
	for(int i = 0; i < res.size(); i++){
		if(res[i] == '-'){
			c[0]++;
			i++;
		} else if(res[i] == '0'){
			c[1]++;
		} else {
			c[2]++;
		}
	}
	for(int i = 0; i < 3; i++){
		cout << c[i] << "\n";
	}
	return 0;
}
