#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	vector<int> freq(N+1, 0);
	for (int i=0; i<N; i++){
		int a;
		cin >> a;
		freq[a]++;
	}
	int ans = 0;
	int minimum = K;
	for (int i=0; i<=N; i++){
		minimum = min(minimum, freq[i]);
		ans += minimum;
	}
	cout << ans;
	return 0;
}