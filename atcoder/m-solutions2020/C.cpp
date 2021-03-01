#include <iostream>
using namespace std;

int main(){
	int N, K, arr[200000];
	cin >> N >> K;
	for (int i=0; i<N; i++){
		cin >> arr[i];
	}
	bool first = true;
	for (int i=K; i<N; i++){
		if (!first) cout << endl;
		if (arr[i-K] < arr[i]) cout << "Yes";
		else cout << "No";
		first = false;
	}
	return 0;
}