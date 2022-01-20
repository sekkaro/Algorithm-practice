#include <iostream>

using namespace std;
 
int main(void){
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	a = (2 * a) - 1;
	b = 2 * b;
	int ans = 0, d = (2 * x < y)? 2 * x: y;
	while(a != b){
		if(a > b){
			if(a - 2 > b){
				ans += d;
				a -= 2;
			} else {
				ans += x;
				a--;
			}
		} else {
			if(a + 2 < b){
				ans += d;
				a += 2;
			} else {
				ans += x;
				a++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
