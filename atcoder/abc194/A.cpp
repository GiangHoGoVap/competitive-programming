#include <iostream>
using namespace std;

int main(){
	int A, B;
	cin >> A >> B;
	int milk_solid = A + B;
	if (milk_solid >= 15 && B >= 8){
		cout << 1;
		return 0;
	}
	else if (milk_solid >= 10 && B >= 3){
		cout << 2;
		return 0;
	}
	else if (milk_solid >= 3){
		cout << 3;
		return 0;
	}
	else cout << 4;
	return 0;
}