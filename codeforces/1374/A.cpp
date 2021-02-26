#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; i++){
		long long x, y, n;
		cin >> x >> y >> n;
		long long cnt = n/x;
		long long ans = x*cnt + y;
		if (ans > n) ans -= x;
		cout << ans << endl;
	}
	return 0;
}
