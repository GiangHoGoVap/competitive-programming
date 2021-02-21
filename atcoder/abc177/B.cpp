#include <iostream>
#include <climits>
using namespace std;

int main(){
	string S, T;
	cin >> S >> T;
	int n = S.length(), m = T.length();
	int ans = INT_MAX;
	for (int i=0; i<n-m+1; i++){
		int cnt = 0;
		for (int j=0; j<m; j++){
			if (S[i+j] != T[j]) cnt++;
		}
		ans = min(ans, cnt);
	}
	cout << ans;
	return 0;
}