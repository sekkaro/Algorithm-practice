#include <bits/stdc++.h>
 
using namespace std;

#define double long double

signed main(void){
	int sx, sy, gx, gy;
	cin >> sx >> sy >> gx >> gy;
	cout << fixed<< setprecision(10);
	sy = -sy;
	double m = 1.0 * (gy - sy) / (gx - sx);
	double x = gx - (gy / m);
	cout << x << '\n';
	return 0;
}
