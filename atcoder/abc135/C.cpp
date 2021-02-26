#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int a[N+1], b[N+1];
	for (int i=0; i<=N; i++){
		cin >> a[i];
	}
	long long ans = 0;
	for (int i=0; i<N; i++){
		cin >> b[i];
		int x = min(a[i], b[i]);
		a[i] -= x;
		b[i] -= x;
		ans += x;
		x = min(a[i+1], b[i]);
		a[i+1] -= x;
		b[i] -= x;
		ans += x;
	}
	cout << ans;
	return 0;
}