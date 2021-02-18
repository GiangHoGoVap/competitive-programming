#include <iostream>
using namespace std;

int main(){
	long long N;
	cin >> N;
	int ans = 0;
	for (long long i=1; i*(i+1)/2 <= N; i++){
		long long temp = 2*N - i*i + i;
		if (temp % (2*i) == 0){
			ans += 2;
		}
	}
	cout << ans;
	return 0;
}