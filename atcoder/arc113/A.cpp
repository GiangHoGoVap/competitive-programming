#include <iostream>
using namespace std;

int main(){
	int K;
	cin >> K;
	long long ans = 0;
	for (int i=1; i<=K; i++){
		for (int j=1; j*i<=K; j++){
			ans += K/(i*j);
		}
	}
	cout << ans;
	return 0;
}