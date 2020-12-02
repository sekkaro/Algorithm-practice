#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int> > a;

int main(void){
	int t;
	cin >> t;
	while(t--){
		a.clear();
		int n, min = 1000000000, result = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			a.push_back(make_pair(x, y));
		}
		sort(a.begin(), a.end());
		for(int i = 0; i < n; i++){
			if(a[i].second < min){
				min = a[i].second;
				result++;
			}
		}
		cout << result << "\n";
	}
	return 0;
}
