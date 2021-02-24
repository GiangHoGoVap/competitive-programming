#include <iostream>
using namespace std;

int main(){
	int X, Y;
	cin >> X >> Y;
	int minimum = min(X, Y);
	int maximum = max(X, Y);
	if (minimum + 3 > maximum) cout << "Yes";
	else cout << "No";
	return 0;
}