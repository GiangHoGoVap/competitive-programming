#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int minimumSecond = v[0];
	bool flag = false;
	for (int i=0; i<n; i++){
		if (minimumSecond < v[i]){
			minimumSecond = v[i];
			flag = true;
			break;
		}
	}
	if (flag) cout << minimumSecond;
	else cout << "NO";
	return 0;
}
