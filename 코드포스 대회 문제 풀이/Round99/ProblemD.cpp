#include <iostream>
#include <vector>

using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ans = 0;
		while(1){
			int idx = -1;
			for(int i = 0; i < n; i++){
				if(a[i] > x){
					idx = i;
					break;
				}
			}
			bool isSorted = true;
			for(int i = 0; i < n - 1; i++){
				if(a[i] > a[i + 1]){
					isSorted = false;
					break;
				}
			}
			if(!isSorted && idx == -1){
				ans = -1;
				break;
			} else if(isSorted) break;
			swap(a[idx], x);
			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
