#include <iostream>
using namespace std;

int main(){
	int K;
	cin >> K;
	int num = 7 % K;
	for (int i=0; i<3*K; i++){
		if (!num){
			cout << i+1;
			return 0;
		}
		num = (num * 10 + 7) % K;
	}
	cout << -1;
	return 0;
}