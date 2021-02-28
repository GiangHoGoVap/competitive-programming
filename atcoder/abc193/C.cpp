#include <iostream>
#include <set>
using namespace std;

int main(){
	long long N;
	cin >> N;
	set<long long> s;
	for (long long i=2; i*i<=N; i++){
		long long x = i*i;
		while (x <= N){
			s.insert(x);
			x *= i;
		}
	}
	cout << N-s.size();
	return 0;
}