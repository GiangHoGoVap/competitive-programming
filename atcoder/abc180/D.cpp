#include <iostream>
using namespace std;

int main(){
	long long X, Y, A, B;
	cin >> X >> Y >> A >> B;
	long long temp = X;
	long long EXP = 0;
	while (temp <= B/(A-1)){
		if (A * temp < Y){
			temp *= A;
			EXP++;
		}
		else break;
	}
	EXP += (Y-1-temp)/B;
	cout << EXP;
	return 0;
}