#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;
	if (A > B) swap(A, B);
	if (C < B) swap(C, B);
	if (A > B) swap(A, B);
	if (A == 5 && B == 5 && C == 7) cout << "YES";
	else cout << "NO";
	return 0;
}