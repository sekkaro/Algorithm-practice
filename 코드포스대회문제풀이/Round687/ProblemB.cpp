#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;
 
#define long long int
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		int max = 0;
		queue<int> q;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max) max = a[i];
			q.push(a[i]);
		}
		vector<int> c(max + 1);
		for(int i = 0; i < n; i++){
			c[a[i]]++;
		}
		int ans = 100000;
		for(int i = 1; i <= max; i++){
			if(c[i]){
				queue<int> p = q;
				int sum = 0, cnt = k;
				while(!p.empty()){
					if(p.front() == i) p.pop();
					else {
						while(!p.empty() && cnt--){
							p.pop();
						}
						sum++;
						cnt = k;
					}
				}
				if(sum < ans) ans = sum;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
