#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s, temp="";
	bool minus = false;
	int result = 0;
	cin >> s;
	for(int i = 0; i <= s.size(); i++){
		if(s[i] == '-' || s[i] == '+' || s[i] == '\0'){
			if(minus == true){
				result += -stoi(temp);
			} else {
				result += stoi(temp);
			}
			temp = "";
			if(s[i] == '-') minus = true;
			continue;	
		}
		temp += s[i];
	}
	cout << result;
	return 0;
}
