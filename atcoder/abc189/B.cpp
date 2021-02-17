#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, X;
	cin >> N >> X;
	int arr[N][2];
	for (int i=0; i<N; i++){
		cin >> arr[i][0];
		cin >> arr[i][1];
	}
	int totalDrunk = 0;
	int ans = -1;
	for (int i=0; i<N; i++){
		totalDrunk += arr[i][0] * arr[i][1];
		if (totalDrunk > X*100){
			ans = i+1;
			break;
		}
	}
	cout << ans;
	return 0;
}