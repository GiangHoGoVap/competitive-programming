#include <iostream>
using namespace std;

bool CanDamage(int N, int S, int D, int arr[][2]){
	bool temp1 = false;
	for (int i=0; i<N; i++){
		if (arr[i][0] < S && arr[i][1] > D){
			temp1 = true;
		}
		if (temp1) return true;
	}
	return false;
}

int main(){
	int N, S, D;
	cin >> N;
	cin >> S;
	cin >> D;
	int arr[N][2];
	for (int i=0; i<N; i++){
		cin >> arr[i][0];
		cin >> arr[i][1];
	}
	bool ans = CanDamage(N, S, D, arr);
	if (ans) cout << "Yes";
	else cout << "No";
	return 0;
}