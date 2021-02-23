#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	long long n, a, b, c;
	vector<long long> v;
	while (t--){
		cin >> n >> a >> b >> c;
		long long ans = 2e18;
		ans = min(ans, (a-n%a)%a);
		ans = min(ans, (b-n%b)%b);
		ans = min(ans, (c-n%c)%c);
		v.push_back(ans);
	} 
	for (int i=0; i<v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}