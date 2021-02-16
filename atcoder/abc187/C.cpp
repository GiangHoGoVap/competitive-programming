#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<string> v(N);
	string ans = "";
	bool check = false;
	for (int i=0; i<N; i++){
		cin >> v[i];
		reverse(v[i].begin(), v[i].end());
	}
	sort(v.begin(), v.end());
	for (int i=0; i<N; i++){
		if (v[i+1] == v[i] + '!'){
			reverse(v[i].begin(), v[i].end());
			check = true;
			ans = v[i];
			break;
		}
	}
	if (check) cout << ans;
	else cout << "satisfiable";
	return 0;
}