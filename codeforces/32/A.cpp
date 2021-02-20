#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, d;
	cin >> n >> d;
	vector<int> v(n);
	for (int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int i = 0, j = 1, way = 0;
	while (j < n){
		if (v[j] - v[i] <= d){
			way += (j - i);
			++j;
		}
		else ++i;
	}
	way *= 2;
	cout << way;
	return 0;
}
