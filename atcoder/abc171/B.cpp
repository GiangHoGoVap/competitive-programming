#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	int arr[N], sum = 0;
	for (int i=0; i<N; i++){
		cin >> arr[i];
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	for (int i=0; i<K; i++){
		sum += arr[i];
	}
	cout << sum;
	return 0;
}