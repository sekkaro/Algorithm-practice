#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int d, k;
		cin >> d >> k;
		int x = 0, y = 0;
		while((x * x) + (y * y) <= d * d){
			if(((x + k) * (x + k)) + (y * y) == d * d) x += k;
			else if(((y + k) * (y + k)) + (x * x) == d * d) y += k;
			else if(x < y) x += k;
			else y += k;
		}
		if(((x / k) + (y / k)) % 2 == 0) cout << "Ashish\n";
		else cout << "Utkarsh\n";
	}
	return 0;
}
