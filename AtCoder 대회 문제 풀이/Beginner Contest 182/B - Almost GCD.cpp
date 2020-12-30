#include <bits/stdc++.h>
 
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<int> a(n);
	int maxN = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		maxN = max(maxN, a[i]);
	}
	int maxc = 0, ans = 0;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(i == j || a[j] % a[i] == 0) cnt++;
		}
		if(cnt > maxc){
			maxc = cnt;
			ans = a[i];
		}
	}
	for(int i = 2; i <= maxN; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(a[j] % i == 0) cnt++;
		}
		if(cnt > maxc){
			maxc = cnt;
			ans = i;
		}
	}
	cout << ans << '\n';
	return 0;	
}
