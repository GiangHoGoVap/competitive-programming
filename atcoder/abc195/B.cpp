#include <iostream>
using namespace std;

int main(){
	int A, B, W;
	cin >> A >> B >> W;
	W *= 1000;
	int X = (W + B - 1)/B;
	int Y = W/A;
	if (X > Y) cout << "UNSATISFIABLE";
	else cout << X << " " << Y;
	return 0;
}