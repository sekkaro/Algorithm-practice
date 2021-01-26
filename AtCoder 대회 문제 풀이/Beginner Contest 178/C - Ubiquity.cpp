#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define M 1000000007LL

int mod(int x){
    return ((x%M + M)%M);
}
int add(int a, int b){
    return mod(mod(a)+mod(b));
}
int mul(int a, int b){
    return mod(mod(a)*mod(b));
}
int minu(int a, int b){
    return mod(mod(a)-mod(b));
}
int modpow(int a, int b){
    if(b==0)
        return 1LL;
    if(b==1)
        return a%M;
    int res=1;
    while(b){
        if(b%2==1)
            res=mul(res,a);
        a=mul(a,a);
        b=b/2;
    }
    return res;
}

 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int ans = modpow(10LL, n);
	ans = minu(ans, mul(modpow(9LL, n), 2));
	ans = add(ans, modpow(8LL, n));
	cout << ans << '\n';
	return 0;
}
