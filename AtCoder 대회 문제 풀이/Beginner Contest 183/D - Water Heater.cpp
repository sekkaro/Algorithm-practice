#include <bits/stdc++.h>
 
using namespace std;

#define int long long
#define MAX 200001

signed main(void){
	int n, w;
	cin >> n >> w;
	vector<int> d(MAX);
	for(int i = 0; i < n; i++){
		int s, t, p;
		cin >> s >> t >> p;
		d[s] += p;
		d[t] -= p;
	}
	for(int i = 0; i < MAX - 1; i++){
		d[i + 1] += d[i];
	}
	for(int i = 0; i < MAX; i++){
		if(d[i] > w){
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
	return 0;	
}
