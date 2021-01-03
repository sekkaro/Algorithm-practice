#include <bits/stdc++.h>
 
using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		queue<int> q;
		q.push(a[0]);
		int cnt = 1, d = 0, idx = 1;
		while(!q.empty()){
			int x = 0;
			for(int i = 0; i < cnt; i++){
				q.pop();
				int prev = -1;
				while(idx < n) {
					if(a[idx] < prev) break;
					prev = a[idx];
					q.push(prev);
					idx++;
					x++;
				}
			}
			cnt = x;
			if(!q.empty()) d++;
		}
		cout << d << '\n';
	}
	return 0;	
}
