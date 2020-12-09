#include <iostream>
#define MAX 64

using namespace std;

char a[MAX][MAX];

string solve(int n, int i, int j){
	if(n == 1){
		return string(1, a[i][j]);
	}
	string a = solve(n / 2, i, j);
	string b = solve(n / 2, i, j + n / 2);
	string c = solve(n / 2, i + n / 2, j);
	string d = solve(n / 2, i + n / 2, j + n / 2);
	if(a == b && a == c && a == d && a.length() == 1){
		return a;
	}
	return "(" + a + b + c + d + ")";
}

int main(void){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", &a[i]);
	}
	cout << solve(n, 0, 0);
	return 0;
}
