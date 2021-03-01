#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i=0; i<v.size(); i++){
			cin >> v[i];
		}
		int ans = n - count(v.begin(), v.end(), *min_element(v.begin(), v.end()));
		cout << ans << endl;
	}
	return 0;
}
