#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> a;

int main(void){
	int n, k, i = 0;
	string s;
	cin >> n >> k >> s;
	while(i != s.size()){
		while(k != 0 && !a.empty() && a.back() < s[i]){
			a.pop_back();
			k--;
		}
		a.push_back(s[i]);
		i++;
	}
	while(k--){
		a.pop_back();
	}
	for(int i = 0; i < a.size(); i++){
		cout << a[i];
	}
	return 0;
}
