#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int N;
	cin >> N;
	double arr[N];
	double manhattan = 0, euclid = 0, cheb = 0;
	for (int i=0; i<N; i++){
		cin >> arr[i];
		arr[i] = abs(arr[i]);
		manhattan += arr[i];
		euclid += arr[i] * arr[i];
		cheb = max(cheb, arr[i]);
	}
	cout << fixed << setprecision(15) << manhattan << endl;
	cout << fixed << setprecision(15) << sqrt(euclid) << endl;
	cout << fixed << setprecision(15) << cheb;
}