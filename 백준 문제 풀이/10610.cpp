#include <iostream>
#include <string>

using namespace std;

int number[10];

int main(void){
	string a;
	cin >> a;
	int temp = 0;
	for(int i = 0; i < a.size(); i++){
		number[a[i] - '0']++;
		temp += a[i] - '0';
	}
	if(temp % 3 == 0 && number[0] != 0){
		for(int i = 9; i >= 0; i--){
			for(int j = 0; j < number[i]; j++){
				cout << i;
			}
		}
	} else {
		cout << -1;
	}
	return 0;
}
