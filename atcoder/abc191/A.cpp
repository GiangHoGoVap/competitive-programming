#include <iostream>
using namespace std;

int main(){
	int V, T, S, D;
	cin >> V >> T >> S >> D; 
	if (D >= T*V && D <= S*V) cout << "No";
	else cout << "Yes";
	return 0;
}