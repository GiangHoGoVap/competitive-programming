#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> v(N+1);
	for (int x=1; x*x<=N; x++){
		for (int y=1; y*y<=N; y++){
			for (int z=1; z*z<=N; z++){
				int cur = pow(x, 2) + pow(y, 2) + pow(z, 2) + x*y + y*z + x*z;
				if (cur <= N) v[cur]++;
			}
		}
	}
	for (int i=1; i<=N; i++){
		cout << v[i] << endl;
	}
	return 0;
}