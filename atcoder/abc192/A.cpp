#include <iostream>
using namespace std;

int main(){
	int X;
	cin >> X;
	if (X < 100){
		cout << 100 - X;
		return 0;
	}
	if (X % 100 == 0){
		cout << 100;
		return 0;
	}
	int remainder = X % 100;
	cout << 100 - remainder;
	return 0;
}