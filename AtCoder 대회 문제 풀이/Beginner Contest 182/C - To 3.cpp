#include <bits/stdc++.h>
 
using namespace std;

int main(void){
	string s;
	cin >> s;
	int n = s.size();
	vector<int> c(3);
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += (s[i] - '0');
		c[(s[i] - '0') % 3]++;
	}
	if(sum % 3 == 0){
		cout << "0\n";
	} else if(sum % 3 == 1){
		if(c[1] && n > 1){
			cout << "1\n";
		} else if(c[2] > 1 && n > 2){
			cout << "2\n";
		} else {
			cout << "-1\n";
		}
	} else {
		if(c[2] && n > 1){
			cout << "1\n";
		} else if(c[1] > 1 && n > 2){
			cout << "2\n";
		} else {
			cout << "-1\n";
		}
	}
	return 0;	
}
