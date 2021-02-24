#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	cout << (1 << N) - 1 << endl;
	for (int i = 1; i < (1 << N); i++){
		for (int j = 0; j < (1 << N); j++){
			int side = __builtin_popcount(i & j) % 2;
			cout << char('A' + side);
		}
		cout << endl;
	}
	return 0;
}