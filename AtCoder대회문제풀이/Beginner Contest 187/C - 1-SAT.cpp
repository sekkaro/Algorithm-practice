#include <bits/stdc++.h>
 
using namespace std;

int main(void){
	int n;
	cin >> n;
	map<string, int> a;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		a[s]++;
	}
	string ans = "satisfiable";
	for (auto const& x : a)
	{
		if(x.second){
			string s = x.first;
			if(s[0] == '!'){
				s.erase(s.begin());
				if(a[s]){
					ans = s;
					break;
				}
			} else if(s[0] != '!' && a["!" + s]){
				ans = s;
				break;
			} 
		}
	}
	cout << ans << endl;
	return 0;	
}
