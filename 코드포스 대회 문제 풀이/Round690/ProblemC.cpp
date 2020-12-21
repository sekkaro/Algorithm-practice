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
		if(n < 10){
			cout << n << '\n';
			continue;
		}
		vector<int> a;
		int num = 9;
		a.push_back(num);
		n -= 9;
		int cnt = 0;
		while(n != 0 && num > 1){
			num--;
			int temp = 1;
			while(temp < n && temp < num){
				temp++;
			}
			a.push_back(temp);
			n -= temp;
		}
		if(n!=0) cout << "-1";
		else {
			for(int i = a.size() - 1; i >= 0; i--){
				cout << a[i];
			}
		}
		cout << '\n';
	}
	return 0;
}
