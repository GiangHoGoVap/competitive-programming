#include <iostream>
using namespace std;

int main(){
	int arr[5];
	for (int i=0; i<5; i++){
		cin >> arr[i];
	}
	int ans;
	for (int i=0; i<5; i++){
		if (arr[i] == 0){
			ans = i+1;
			break;
		}
	}
	cout << ans;
	return 0;
}