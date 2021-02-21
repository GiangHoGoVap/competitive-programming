#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int sum = n * (n+1)/2;
	m %= sum;
	for (int i=1; i<=n; i++){
		if (m < i) break;
		m -= i;
	}
	cout << m;
	return 0;
}
