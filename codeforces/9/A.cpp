#include <iostream>
using namespace std;

int gcd(int a, int b){
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main(){
	int Y, W;
	cin >> Y >> W;
	int maxi = max(Y, W);
	int win = 6-maxi+1;
	int GCD = gcd(win, 6);
	cout << win/GCD << "/" << 6/GCD;
	return 0;
}
