#include <iostream>
#include <algorithm>

using namespace std;

int data[100001];

int main(void){
	int n, result = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> data[i];
	}
	sort(data, data + n);
	for(int i = 0; i < n; i++){
		if((n - i) * data[i] > result){
			result = (n - i) * data[i];
		}
	}
	cout << result;
	return 0;
}
