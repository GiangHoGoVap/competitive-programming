#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long N;
	cin >> N;
	string ans;
	while (N > 0){
		ans += char('a' + (N-1) % 26);
		N = (N - 1)/26;
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}