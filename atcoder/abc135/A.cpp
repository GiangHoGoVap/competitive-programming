#include <iostream>
using namespace std;

const long long MAX = 1000000000;

int main(){
	long long A, B;
	cin >> A >> B;
	for (long long i=0; i<=MAX; i++){
		if (abs(A - i) == abs(B - i)){
			cout << i;
			return 0;
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}