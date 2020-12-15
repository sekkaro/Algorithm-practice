#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> a(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			for(int j = 0; j < m; j++){
				a[i][j] = s[j] - '0';
			}
		}
		vector<vector<int>> ans;
		for(int j = m - 1; j >= 2; j--){
			for(int i = 0; i < n; i++){
				if(a[i][j] == 1){
					vector<int> res;
					a[i][j] = 0;
					a[i][j - 1] ^= 1;
					res.push_back(i + 1);
					res.push_back(j + 1);
					res.push_back(i + 1);
					res.push_back(j);
					if(i != n - 1){
						a[i + 1][j - 1] ^= 1;
						res.push_back(i + 2);
						res.push_back(j);
					} else {
						a[i - 1][j - 1] ^= 1;
						res.push_back(i);
						res.push_back(j);
					}
					ans.push_back(res);
				}
			}
		}
		if(n % 2 != 0){
			vector<int> res;
			if(a[n - 1][0] == 1 && a[n - 1][1] == 1){
				a[n - 1][0] = 0;
				a[n - 1][1] = 0;
				a[n - 2][0] ^= 1;
				res.push_back(n);
				res.push_back(1);
				res.push_back(n);
				res.push_back(2);
				res.push_back(n - 1);
				res.push_back(1);
			} else if(a[n - 1][0] == 1){
				a[n - 1][0] = 0;
				a[n - 2][0] ^= 1;
				a[n - 2][1] ^= 1;
				res.push_back(n);
				res.push_back(1);
				res.push_back(n - 1);
				res.push_back(1);
				res.push_back(n - 1);
				res.push_back(2);
			} else if(a[n - 1][1] == 1){
				a[n - 1][1] = 0;
				a[n - 2][1] ^= 1;
				a[n - 2][0] ^= 1;
				res.push_back(n);
				res.push_back(2);
				res.push_back(n - 1);
				res.push_back(2);
				res.push_back(n - 1);
				res.push_back(1);
			}
			if(!res.empty())ans.push_back(res);
			n--;
		}
		for(int i = 0; i < n; i += 2){
			if(a[i][0] == 0 && a[i][1] == 0 && a[i + 1][0] == 0 && a[i + 1][1] == 0) continue;
			if(a[i][0] == 0 && a[i][1] == 1 && a[i + 1][0] == 1 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 0 && a[i + 1][0] == 1 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1); 
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 1 && a[i + 1][0] == 0 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 1 && a[i + 1][0] == 1 && a[i + 1][1] == 0){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 1 && a[i + 1][0] == 1 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 0 && a[i + 1][0] == 0 && a[i + 1][1] == 0){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
			} else if(a[i][0] == 0 && a[i][1] == 1 && a[i + 1][0] == 0 && a[i + 1][1] == 0){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 0 && a[i][1] == 0 && a[i + 1][0] == 1 && a[i + 1][1] == 0){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
			} else if(a[i][0] == 0 && a[i][1] == 0 && a[i + 1][0] == 0 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 1 && a[i + 1][0] == 0 && a[i + 1][1] == 0){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 0 && a[i][1] == 1 && a[i + 1][0] == 1 && a[i + 1][1] == 0){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 0 && a[i][1] == 0 && a[i + 1][0] == 1 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 0 && a[i + 1][0] == 0 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 1 && a[i][1] == 0 && a[i + 1][0] == 1 && a[i + 1][1] == 0){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			} else if(a[i][0] == 0 && a[i][1] == 1 && a[i + 1][0] == 0 && a[i + 1][1] == 1){
				vector<int> res;
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 1);
				res.push_back(2);
				res.push_back(i + 2);
				res.push_back(1);
				ans.push_back(res);
				res.clear();
				res.push_back(i + 1);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(1);
				res.push_back(i + 2);
				res.push_back(2);
				ans.push_back(res);
			}
		}
		cout << ans.size() << '\n';
		for(int i = 0; i < ans.size(); i++){
			for(int j = 0; j < ans[i].size(); j++){
				cout << ans[i][j] << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}
