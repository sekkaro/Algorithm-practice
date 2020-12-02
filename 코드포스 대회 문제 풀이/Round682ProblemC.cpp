#include <iostream>
 
using namespace std;
 
#define int long long

int a[101][101];

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		bool makeOdd = true;
		for(int i = 0; i < n; i++){
			bool temp = makeOdd;
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				if(makeOdd && a[i][j] % 2 == 0) a[i][j]++;
				else if(!makeOdd && a[i][j] % 2 != 0) a[i][j]++;
				makeOdd = !makeOdd;
			}
			makeOdd = !temp;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}
