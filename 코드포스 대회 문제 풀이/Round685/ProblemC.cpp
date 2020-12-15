#include <iostream>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		string a, b;
		cin >> n >> k >> a >> b;
		int ac[26] = {0}, bc[26] = {0}, flag = 0;
		for(int i = 0; i < n; i++){
			ac[a[i] - 'a']++;
			bc[b[i] - 'a']++;
		}
		for(int i = 0; i < 25; i++){
			if(ac[i] < bc[i]){
				flag = 1;
				break;
			}
			int diff = ac[i] - bc[i];
			if(diff % k){
				flag = 1;
				break;
			}
			ac[i + 1] += diff;
		}
		if(flag) cout << "No\n";
		else cout << "Yes\n";
	}
	return 0;
}
