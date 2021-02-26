#include <iostream>
using namespace std;

long long power(long long a, long long b, long long mod){
	if (b == 0) return 1 % mod;
	else if (b & 1){
		return (a * power(a, b-1, mod)) % mod;
	}
	long long res = power(a, b/2, mod);
	return (res * res) % mod;
	
}

int main(){
	long long N, M;
	cin >> N >> M;
	long long p = M * M;
	cout << (power(10%p, N, p) / M) % M;
	return 0;
}