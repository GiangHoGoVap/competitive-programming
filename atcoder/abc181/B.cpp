#include <iostream>
using namespace std;

int main(){
	int N;
	long long sum = 0;
	cin >> N;
	for (int i=0; i<N; i++){
		long long A, B;
		cin >> A >> B;
		A--;
		sum += (B*(B+1)/2) - (A*(A+1)/2);
	}
	cout << sum;
	return 0;
}