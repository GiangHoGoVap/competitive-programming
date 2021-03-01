#include <iostream>
using namespace std;

int main(){
	int A, B, C, K;
	cin >> A >> B >> C >> K;
	int cnt = 0;
	while (B <= A){
		B += B;
		cnt++;
	}
	while (C <= B){
		C += C;
		cnt++;
	}
	if (cnt <= K) cout << "Yes";
	else cout << "No";
	return 0;
}