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
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		int i = n;
		bool isEqual = false;
		for(; i > 1; i--){
			if(sum % i != 0) continue;
			int num = sum / i;
			isEqual = true;
			for(int j = 0; j < n; j++){
				if(a[j] < num){
					int b = a[j], k;
					for(k = j + 1; k < n && b < num; k++){
						b += a[k];
					}
					if(b != num){
						isEqual = false;
						break;
					}
					j = k - 1;
				} else if(a[j] > num){
					isEqual = false;
					break;
				}
			}
			if(isEqual) break;
		}
		cout << n - i << '\n';
	}
	return 0;
}
