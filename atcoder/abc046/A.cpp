#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int arr[3];
	for (int i=0; i<3; i++){
		cin >> arr[i];
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	int cnt = 1;
	sort(arr, arr+n);
	for (int i=2; i>0; i--){
		if (arr[i] != arr[i-1]) cnt++;
	}
	cout << cnt;
	return 0;
}