#include <iostream>
using namespace std;

int digit_extract(int n){
	int sum = 0;
	while (n > 0){
		int remainder = n % 10;
		sum += remainder;
		n /= 10;
	}
	return sum;
}

int main(){
	int A, B;
	cin >> A >> B;
	int S_A, S_B;
	S_A = digit_extract(A);
	S_B = digit_extract(B);
	if (S_A >= S_B) cout << S_A;
	else cout << S_B;
	return 0;
}