#include <iostream>
using namespace std;

int main(){
	int n;
	string number;
	cin >> n >> number;
	bool lucky = true;
	n /= 2;
	int diff = 0;
	for (int i=0; i<n; i++){
		if ((number[i] != '4' && number[i] != '7') || 
			(number[n+i] != '4' && number[n+i] != '7')){
				lucky = false;
				break;
			}
		diff += (number[i] - number[n+i]);
	}
	if (lucky && diff == 0) cout << "YES";
	else cout << "NO";
	return 0;
}
