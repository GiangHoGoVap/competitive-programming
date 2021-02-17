#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	int arr[N], ans = 0, temp;
	for (int i=0; i<N; i++){
		cin >> arr[i];
	}
	for (int i=0; i<N; i++){
		int minimum = arr[i];
		for (int j=i; j<N; j++){
			minimum = min(minimum, arr[j]);
			temp = minimum * (j - i + 1);
			ans = max(ans, temp);
		}
	}
	cout << ans;
	return 0;
}