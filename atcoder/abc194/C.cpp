#include <iostream>
using namespace std;
long long arr[405], ans = 0;
int main(){
	int N;
	cin >> N;
	for (int i=0; i<N; i++){
		int A;
		cin >> A;
		arr[A + 200]++;
	}
	for (int i=0; i<=400; i++){
		for (int j=i+1; j<=400; j++){
			ans += (i-j) * (i-j) * arr[i] * arr[j];
		}
	}
	cout << ans;
	return 0;
}