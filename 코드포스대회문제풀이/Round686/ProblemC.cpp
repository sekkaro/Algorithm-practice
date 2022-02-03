#include <iostream>
#include <vector>
 
using namespace std;
 
#define long long int
#define INF 1000000000
#define MAX 200001
 
signed main(void){
	int c[MAX];
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a;
		int max = 0, prev = 0, min = INF;
		for(int i = 0; i < n; i++){
			int curr;
			cin >> curr;
			if(curr != prev){
				if(curr > max) max = curr;
				if(curr < min) min = curr;
				a.push_back(curr);
				prev = curr;
			} 
		}
		fill(c + min, c + max + 1, 0);
		for(int i = 0; i < a.size(); i++){
			if(!c[a[i]]) c[a[i]] = 2;
			else c[a[i]]++;
		}
		c[a[0]]--;
		c[a[a.size() - 1]]--;
		int ans = INF;
		for(int i = min; i <= max; i++){
			if(c[i]){
				if(c[i] < ans) ans = c[i];
			} else if(i == a[0] || i == a[a.size() - 1]){
				if(c[i] < ans) ans = c[i];
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
