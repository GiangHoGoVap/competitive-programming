#include <iostream>
using namespace std;

int main(){
	long long B, C;
	cin >> B >> C;
	long long temp = B;
	B = max(B, -B);
	if (B == 0) cout << C;
	else{
		if (C == 1) cout << 2;
		if (C > 1 && C <= 2*B) cout << 2*C-1;
		if (C > 2*B){
			if (temp > 0) cout << C+2*B-1;
			if (temp < 0) cout << C+2*B;
		}
	}
	return 0;
}