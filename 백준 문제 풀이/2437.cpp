#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];

int main(void){
	int n, result = 1;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		if(result < a[i]) break;
		result += a[i];
	}
	cout << result;
	return 0;
}
