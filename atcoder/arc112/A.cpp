#include <iostream>
using namespace std;
int main(){
	int T;
	long long L, R;
	cin >> T;
	while (T){
		cin >> L >> R;
		long long ans = max(0LL, R-L-L+1);
		cout << ans*(ans + 1)/2 << endl; 
		T--;
	}
	return 0;
}