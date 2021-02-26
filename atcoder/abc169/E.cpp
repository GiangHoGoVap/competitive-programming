#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	long long A[N], B[N];
	for (int i=0; i<N; i++){
		cin >> A[i] >> B[i];
	}
	sort(A, A+N);
	sort(B, B+N);
	long long ans = 0;
	int mid = N/2;
	if (N % 2){
		ans = B[mid] - A[mid] + 1;
	}
	else{
		long long x = A[mid] + A[mid-1];
		long long y = B[mid] + B[mid-1];
		ans = y - x + 1LL;
	}
	cout << ans;
	return 0;
}