#include <iostream>
using namespace std;

int main(){
	int X, Y;
	cin >> X >> Y;
	if (Y % 2 != 0){
		cout << "No";
		return 0;
	}
	Y >>= 1;
	if (Y >= X && X >= Y-X){
		cout << "Yes";
	}
	else cout << "No";
	return 0;
}