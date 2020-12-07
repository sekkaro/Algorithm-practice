#include <iostream>
#include <string>

#define MAX 10001

using namespace std;

int a[MAX];

int main(void){
	for(int i = 1; i < MAX; i++){
		string s = to_string(i);
		int sum = i;
		for(int j = 0; j < s.size(); j++){
			sum += s[j] - '0';
		}
		a[sum] = 1;
	}
	for(int i = 1; i < MAX; i++){
		if(a[i] == 0) cout << i << "\n";
	}
}
