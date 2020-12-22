#include <iostream>
#include <string>

using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		size_t found = s.find("2020");
		bool isFound = false;
		if(found == 0 || found == n - 4){
			cout << "YES\n";
			continue;
		}
		while(found != string::npos){
			found = s.find("2020", found+1);
			if(found == n - 4){
				cout << "YES\n";
				isFound = true;
				continue;
			}
		}
		if(isFound) continue;
		found = s.find("202");
		if(found == 0){
			while(found != string::npos){
				found = s.find("0", found+1);
				if(found == n - 1){
					cout << "YES\n";
					isFound = true;
					continue;
				}
			}
		}
		if(isFound) continue;
		found = s.find("20");
		if(found == 0){
			while(found != string::npos){
				found = s.find("20", found+1);
				if(found == n - 2){
					cout << "YES\n";
					isFound = true;
					continue;
				}
			}
		}
		if(isFound) continue;
		found = s.find("2");
		if(found == 0){
			while(found != string::npos){
				found = s.find("020", found+1);
				if(found == n - 3){
					cout << "YES\n";
					isFound = true;
					continue;
				}
			}
		}
		if(isFound) continue;
		cout << "NO\n";
	}
	return 0;
}
