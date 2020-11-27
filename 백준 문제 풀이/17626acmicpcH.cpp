#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int d[50001];

int dp(int x){
	if (x < 2) return x;
	int res = 1000000000;
	for(int i = (int)sqrt(x); i > 0; i--){
		if(d[x - (i * i)] != 0){
			res = min(res, d[x - (i * i)] + 1);
		} else {
			res = min(res, dp(x - (i * i)) + 1);
		}
	}
	return d[x] = res;
}

int main(void){
	int n, result;
	cin >> n;
	for(int i = 1; i <= (int)sqrt(n); i++){
		d[i*i] = 1;
	}
	result = dp(n);	
	cout << result;
	return 0;
}
