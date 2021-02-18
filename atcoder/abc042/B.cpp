#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, L;
	cin >> N >> L;
	vector<string> v(N);
	for (int i=0; i<N; i++){
		cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	for (int i=0; i<N; i++){
		cout << v[i];
	}
	return 0;
}