#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int n;
	cin >> n;
	vector<pair<int, int> > a;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		a.push_back(make_pair(x, y));
	}
	bool isTriple = false;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				int x1 = a[i].first;
				int y1 = a[i].second;
				int x2 = a[j].first;
				int y2 = a[j].second;
				int x3 = a[k].first;
				int y3 = a[k].second;
				if((x2 - x1) * (y3 - y2) == (y2 - y1) * (x3 - x2)){
					isTriple = true;
					break;
				}
			}
		}
	}
	if(isTriple) cout << "Yes\n";
	else cout << "No\n";
	return 0;	
}
