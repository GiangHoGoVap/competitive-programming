#include <iostream>
using namespace std;

int main(){
	int N;
	int x[1000], y[1000];
	cin >> N;
	for (int i=0; i<N; i++){
		cin >> x[i] >> y[i];
	}
	int counter = 0;
	for (int i=0; i<N; i++){
		for (int j=i+1; j<N; j++){
			int dx = x[i] - x[j];
			int dy = y[i] - y[j];
			if (abs(dx) >= abs(dy)) counter++;
		}
	}
	cout << counter;
	return 0;
}