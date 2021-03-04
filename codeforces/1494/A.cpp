#include <iostream>
using namespace std;

bool isValid(string s){
	int n = s.length();
	for (int a=-1; a<=1; a+=2){
		for (int b=-1; b<=1; b+=2){
			for (int c=-1; c<=1; c+=2){
				int cur = 0;
				bool flag = true;
				for (int i=0; i<n; i++){
					if (s[i] == 'A') cur += a;
					if (s[i] == 'B') cur += b;
					if (s[i] == 'C') cur += c;
					if (cur < 0) flag = false;
				}
				if (cur != 0) flag = false;
				if (flag) return true;
			}
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		if (isValid(s)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
