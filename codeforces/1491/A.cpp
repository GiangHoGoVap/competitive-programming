#include <iostream>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	int arr[n], cnt = 0;
	for (int i=0; i<n; i++){
		cin >> arr[i];
		cnt += arr[i];
	}
	while (q--){
		int type, x;
		cin >> type >> x;
		if (type == 1){
			if (arr[x-1]) cnt--;
			else cnt++;
			arr[x-1] = 1 - arr[x-1];
		}
		else{
			if (cnt >= x) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
	return 0;
}
