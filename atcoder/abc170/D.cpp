#include <iostream>
using namespace std;

int counter[1111111];
int divi[1111111];
int main(){
	int N;
	cin >> N;
	int arr[N];
	for (int i=0; i<N; i++){
		cin >> arr[i];
		counter[arr[i]]++;
	}
	for (int i=1; i<=1000000; i++){
		for (int j=i; j<=1000000; j+=i){
			divi[j] += counter[i];
		}
	}
	int ans = 0;
	for (int i=0; i<N; i++){
		if (divi[arr[i]] == 1) ans++;
	}
	cout << ans;
	return 0;
}