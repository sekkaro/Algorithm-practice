#include <iostream>
#include <vector>
 
using namespace std;
 
int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n * k);
		for(int i = 0; i < n * k; i++) cin >> a[i];
		int cnt = 0, c = 1;
		long long sum = 0;
		for(int i = (n * k) - 1; cnt < k; i--){
			if(c == n / 2 + 1){
				sum += a[i];
				cnt++;
				c = 1;
			} else c++;
		}
		cout << sum << '\n';
	}
	return 0;
}
