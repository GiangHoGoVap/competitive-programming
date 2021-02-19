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
	int min_row = n, max_row = 0, min_col = m, max_col = 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (arr[i][j] == '*'){
				if (i < min_row) min_row = i;
				if (i > max_row) max_row = i;
				if (j < min_col) min_col = j;
				if (j > max_col) max_col = j;
			}
		}
	}
	for (int i=min_row; i<=max_row; i++){
		for (int j=min_col; j<=max_col; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}
