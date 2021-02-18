#include <iostream>
using namespace std; 
int D[10];
 
int main()
{
	int N, K;
	cin >> N >> K;
	for (int i=0; i<K; i++){
		int a;
		cin >> a;
		D[a] = 1;
	}
	for(int n = N; n >= 1; ++n){
		int a = n;
		int v = 1;
		while(a > 0){
			int d = a % 10;
			a /= 10;
			if (D[d]){
				v = 0;
				break;
			}
		}
		if (v){
			cout << n;
			return 0;
		}
	}
	return 0;
}