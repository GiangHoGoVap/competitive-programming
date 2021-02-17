#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	long long ans = 1, temp = 1;
	for (int i=0; i<N; i++){
		string s;
		cin >> s;
		if (s == "AND"){
			temp = 2 * temp + ans;
		}
		else ans = 2 * ans + temp;
	}
	cout << ans;
	return 0;
}