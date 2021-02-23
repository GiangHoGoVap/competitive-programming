#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int64_t> A(N), B(N);
	for (auto &a : A){
		cin >> a;
	}
	for (auto &b : B){
		cin >> b;
	}
	int64_t prefix = 0, maximum = 0;
	for (int i=0; i<N; i++){
		prefix = max(prefix, A[i]);
		maximum = max(maximum, prefix * B[i]);
		cout << maximum << endl;
	}
	return 0;
}