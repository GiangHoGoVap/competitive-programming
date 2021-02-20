#include <iostream>
#include <algorithm>
using namespace std;

long long solve(long long num){
	string s1 = to_string(num), s2 = to_string(num);
	sort(s1.begin(), s1.end());
	sort(s2.rbegin(), s2.rend());
	long long g1 = stoi(s2), g2 = stoi(s1);
	return g1 - g2;
}

int main(){
	long long N;
	int K;
	cin >> N >> K;
	long long arr[100001] = {0};
	arr[0] = N;
	for (int i=1; i<=K; i++){
		arr[i] = solve(arr[i-1]);
	}
	cout << arr[K];
	return 0;
}