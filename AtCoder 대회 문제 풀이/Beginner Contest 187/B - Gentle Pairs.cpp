#include <bits/stdc++.h>
 
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<pair<int, int> > a;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		a.push_back(make_pair(x, y));
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		int x1 = a[i].first;
		int y1 = a[i].second;
		for(int j = i + 1; j < n; j++){
			int x2 = a[j].first;
			int y2 = a[j].second;
			if(x2 - x1 != 0 && 1.0 * (y2 - y1) / (x2 - x1) <= 1 && 1.0 * (y2 - y1) / (x2 - x1) >= -1){
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;	
}
