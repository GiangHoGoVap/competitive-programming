#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N], B[N], sum = 0;
	for (int i=0; i<N; i++){
		cin >> A[i];
	}
	for (int i=0; i<N; i++){
		cin >> B[i];
		sum += (A[i] * B[i]);
	}
	if (sum == 0) cout << "Yes";
	else cout << "No";
	return 0;
}