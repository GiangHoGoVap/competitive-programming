#include <iostream>
using namespace std;

int main(){
	int N, D, cnt = 0;
	cin >> N >> D;
	for (int i=0; i<N; i++){
		int x, y;
		cin >> x >> y;
		if (x*(long long)x + y*(long long)y <= D*(long long)D) cnt++;
	}
	cout << cnt;
	return 0;
}