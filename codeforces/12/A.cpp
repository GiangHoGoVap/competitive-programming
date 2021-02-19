#include <iostream>
using namespace std;

int main(){
	char arr[3][3];
	for (int i=0; i<3; i++){
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	if (arr[0][1] == arr[2][1] && arr[1][0] == arr[1][2]
		&& arr[0][0] == arr[2][2] && arr[0][2] == arr[2][0]) cout << "YES";
	else cout << "NO";
	return 0;
}
