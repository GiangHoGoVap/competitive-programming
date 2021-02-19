#include <iostream>
#include <set>
using namespace std;

int main(){
	int X, N;
	cin >> X >> N;
	if (N == 0){
		cout << X;
		return 0;
	}
	int arr[N];
	set<int> s;
	for (int i=0; i<N; i++){
		cin >> arr[i];
		s.insert(arr[i]);
	}
	int min_diff = int(1e9);
	int ans = 0;
	for (int i=-1000; i<=1000; i++){
		if (s.find(i) != s.end()) continue;
		int diff = abs(X - i);
		if (diff < min_diff){
			min_diff = diff;
			ans = i;
		}
	}
	cout << ans;
	return 0;
}