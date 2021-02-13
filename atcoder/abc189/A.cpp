#include <iostream>
using namespace std;

int main(){
	char C1, C2, C3;
	cin >> C1;
	cin >> C2;
	cin >> C3;
	if (C1 == C2 && C1 == C3) cout << "Won";
	else cout << "Lost";
	return 0;
}