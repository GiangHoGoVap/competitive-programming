#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N, X;
	cin >> N >> X;
	vector<int> v(N);
	for (int i=0; i<N; i++){
		cin >> v[i];
	}
	vector<int> ans;
	for (int i=0; i<N; i++){
		if (v[i] != X) ans.push_back(v[i]);
	}
	for (int i=0; i<ans.size(); i++){
		cout << ans[i] << " ";
	}
	return 0;
}