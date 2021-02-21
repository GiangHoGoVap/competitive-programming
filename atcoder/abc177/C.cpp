#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main(){
	int N;
	cin >> N;
	long long arr[N];
	for (int i=0; i<N; i++){
		cin >> arr[i];
	}
	long long ans = 0;
	long long temp = 0;
	for (int i=N-1; i>=0; i--){
		ans += (arr[i] * temp);
		temp += arr[i];
		temp %= MOD;
		ans %= MOD;
	}
	cout << ans;
	return 0;
}