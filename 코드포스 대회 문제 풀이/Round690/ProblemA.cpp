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
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int left = 0, right = n - 1;
		while(left <= right){
			cout << a[left] << ' ';
			left++;
			if(left > right) break;
			cout << a[right] << ' ';
			right--;
		}
		cout << '\n';
	}
	return 0;
}
