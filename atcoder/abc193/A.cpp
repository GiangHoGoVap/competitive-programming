#include <iostream>
#include <limits>
typedef std::numeric_limits<double> dbl;
using namespace std;

int main(){
	int A, B;
	cin >> A >> B;
	double ans = (double)(A-B)/A;
	cout.precision(dbl::max_digits10);
	cout << ans*100;
	return 0;
}