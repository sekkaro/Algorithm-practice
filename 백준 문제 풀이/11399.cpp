#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a;

int main(void){
	int n, m = 0, result = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < a.size(); i++){
		result += m + a[i];
		m += a[i];
	}
	cout << result;
	return 0;
}
