#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
#define int long long
 
int f(string s){
	vector<int> a(10);
	for(char c : s) a[c - '0']++;
	int res = 0;
	for(int i = 1; i <= 9; i++){
		int x = 1;
		for(int j = 0; j < a[i]; j++){
			x *= 10;
		}
		res += x * i;
	}
	return res;
}
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int k;
	cin >> k;
	string s, t;
	cin >> s >> t;
	vector<int> c(10, k);
	c[0] = 0;
	for(int i = 0; i < 4; i++){
		c[s[i] - '0']--;
		c[t[i] - '0']--;
	}
	int cnt = 0;
	for(int a = 1; a <= 9; a++){
		for(int b = 1; b <= 9; b++){
			s[4] = '0' + a;
			t[4] = '0' + b;
			if(f(s) > f(t)){
				if(a == b) cnt += c[a] * (c[a] - 1);
				else cnt += c[a] * c[b];
			}
		}
	}
	int C = 0;
	for(int i = 0; i < 10; i++){
		C += c[i];
	}
	int tot = C * (C - 1);
	double ans = (double) cnt / tot;
	printf("%.10f\n", ans);
	return 0;
}
