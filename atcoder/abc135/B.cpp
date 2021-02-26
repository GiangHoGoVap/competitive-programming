#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int arr[N];
	for (int i=0; i<N; i++){
		cin >> arr[i];
	}
	for (int i=0; i<N; i++){
		for (int j=i; j<N; j++){
			swap(arr[i], arr[j]);
			bool flag = true;
			for (int k=0; k+1<N; k++){
				if (arr[k] > arr[k+1]){
					flag = false;
					break;
				}
			}
			if (flag){
				cout << "YES";
				return 0;
			}
			swap(arr[i], arr[j]);
		}
	}
	cout << "NO";
	return 0;
}