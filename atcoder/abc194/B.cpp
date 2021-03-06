#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N, ans = 10001;
	cin >> N;
	vector<int> a, b;
	while (N--){
		int A, B;
		cin >> A >> B;
		a.push_back(A);
		b.push_back(B);
	}
	for (int i=0; i<a.size(); i++){
		for (int j=0; j<b.size(); j++){
			if (i == j){
				int sum = a[i] + b[j];
				ans = min(ans, sum);
			}
			else{
				int temp = max(a[i], b[j]);
				ans = min(ans, temp);
			}
		}
	}
	cout << ans;
}