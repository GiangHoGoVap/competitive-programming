#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int i;
	int j = 1;
	while (i < N){
		i = 1000 * j;
		j++;
	}
	cout << i - N;
	return 0;
}