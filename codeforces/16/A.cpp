#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	char arr[n][m];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}
	bool notaccepted = false;
	for (int i=0; i<n; i++){
		for (int j=1; j<m; j++){
			if (arr[i][j] != arr[i][j-1]){
				notaccepted = true;
				break;
			}
		}
	}
	for (int i=1; i<n; i++){
		for (int j=0; j<m; j++){
			if (arr[i][j] == arr[i-1][j]){
				notaccepted = true;
				break;
			}
		}
	}
	if (notaccepted) cout << "NO";
	else cout << "YES";
	return 0;
}
