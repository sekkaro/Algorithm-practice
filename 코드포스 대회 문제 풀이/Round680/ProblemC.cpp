#include <iostream>
#include <vector>

using namespace std;

void solve(long long p, long long q){
	long long orp = p;
	vector<pair<long long, long long> > f;
	long long x = q;
	for(long long i = 2; i * i <= x; i++){
		if(x % i == 0){
			long long cnt = 0;
			while(x % i == 0){
				cnt++;
				x /= i;
			}
			f.push_back(make_pair(i, cnt));
		}
	}
	if(x != 1){
		f.push_back(make_pair(x, 1));
	}
	long long ans = p;
	for(auto x: f){
		long long pr = x.first;
		long long freq = x.second;
		long long cnt = 0;
		while(p % pr == 0){
			p /= pr;
			cnt++;
		}
		long long req = max(cnt - freq + 1, 0LL);
		long long val = 1;
		for(long long i = 0; i < req; i++) val *= pr;
		if(val < ans) ans = val;
	}
	cout << orp / ans << '\n';
}

int main(void){
	int t;
	cin >> t;
	while(t--){
		long long p, q;
		cin >> p >> q;
		if(p % q != 0){
			cout << p << '\n';
		} else{
			solve(p, q);
		}
	}
	return 0;
}
