#include <iostream>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		string r, b;
		cin >> n >> r >> b;
		int cntR = 0, cntB = 0;
		for(int i = 0; i < n; i++){
			if(r[i] - '0' > b[i] - '0') cntR++;
			else if(b[i] - '0' > r[i] - '0') cntB++;
		}
		if(cntR > cntB) cout << "RED\n";
		else if(cntB > cntR) cout << "BLUE\n";
		else cout << "EQUAL\n";
	}	
	return 0;
}
