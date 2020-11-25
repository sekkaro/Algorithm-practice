#include <iostream>
#include <vector>
 
using namespace std;
 
#define int long long
 
signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int max = 0, sum = 0;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			if(x > max) max = x; 
			sum += x;
		}
		if(sum <= (n - 1) * max) cout << ((n - 1) * max) - sum << '\n';
		else{
			int ans = 0;
			while((sum + ans) % (n - 1) != 0){
				ans++;
			}
			cout << ans << '\n';
		} 
	}
	return 0;
}
