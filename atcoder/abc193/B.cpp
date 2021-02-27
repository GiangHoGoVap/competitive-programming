#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<long long> v;
	for (int i=0; i<N; i++){
		long long A, P, X;
		cin >> A >> P >> X;
		if (A < X){
			v.push_back(P);
		}
	}
	if (v.empty()) cout << -1;
	else{
		sort(v.begin(), v.end());
		cout << v[0];
	}
	return 0;
}