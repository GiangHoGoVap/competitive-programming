#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A == 0 && B > 0) cout << "Aoki";
	if (B == 0 && A > 0) cout << "Takahashi";
	if (A == 0 && B == 0){
		if (C == 0){
			cout << "Aoki";
		}
		else cout << "Takahashi";
	}
	while (A > 0 && B > 0){
		if (C == 0){
			A--;
			if (A == 0){
				cout << "Aoki";
				break;
			}
			B--;
			if (B == 0){
				cout << "Takahashi";
				break;
			}
		}
		else{
			B--;
			if (B == 0){
				cout << "Takahashi";
				break;
			}
			A--;
			if (A == 0){
				cout << "Aoki";
				break;
			}
		}
	}
	return 0;
}