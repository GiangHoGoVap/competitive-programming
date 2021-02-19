#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	long long N;
	cin >> N;
	vector<long long> v;
	for (long long i=1; i*i<=N; i++){
		if (N % i == 0){
			v.push_back(i);
			if (i*i < N) v.push_back(N/i);
		}
	}
	sort(v.begin(), v.end());
	for (auto x : v){
		cout << x << endl;
	}
	return 0;
}