#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int arr[N+1];
	for (int i=1; i<=N; i++){
		cin >> arr[i];
	}
	int cnt = 0;
	for (int i=1; i<=N; i++){
		if (i % 2 != 0 && arr[i] % 2 != 0) cnt++;
	}
	cout << cnt;
	return 0;
}