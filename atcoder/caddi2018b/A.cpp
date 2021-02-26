#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int cnt = 0;
	while (N > 0){
		int remainder = N % 10;
		if (remainder == 2) cnt++;
		N /= 10;
	}
	cout << cnt;
	return 0;
}