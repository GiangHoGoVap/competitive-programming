#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int cnt[4] = {0};
	for (int i=0; i<=N; i++){
		string s;
		getline(cin, s);
		if (s == "AC") cnt[0]++;
		if (s == "WA") cnt[1]++;
		if (s == "TLE") cnt[2]++;
		if (s == "RE") cnt[3]++;
	}
	cout << "AC x " << cnt[0] << endl;
	cout << "WA x " << cnt[1] << endl;
	cout << "TLE x " << cnt[2] << endl;
	cout << "RE x " << cnt[3];
	return 0;
}