#include <bits/stdc++.h>
 
using namespace std;

int main(void){
	string a, b;
	cin >> a >> b;
	int sum1=0, sum2=0;
	for(int i = 0; i < 3; i++){
		sum1 += a[i] - '0';
		sum2 += b[i] - '0';
	}
	cout << max(sum1, sum2) << endl;
	return 0;	
}
