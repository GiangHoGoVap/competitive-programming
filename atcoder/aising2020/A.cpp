#include <iostream>
using namespace std;

int main(){
	int L, R, d;
	cin >> L >> R >> d;
	int i=2, cnt=0, temp=d;
	while (d <= R){
		if (d >= L && d <= R) cnt++;
		d = temp * i;
		i++;
	}
	cout << cnt;
	return 0;
}