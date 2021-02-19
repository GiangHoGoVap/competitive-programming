#include <iostream>
using namespace std;

int main(){
	long long a, b, c;
	char dot;
	cin >> a >> b >> dot >> c;
	long long ans = a*b;
	ans += (a*c)/100;
	cout << ans;
	return 0;
}