#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	bool flag = true;
	for (int i=0; i<s.length(); i++){
		if (i % 2 == 0){
			if (islower(s[i]) == 0){
				flag = false;
				break;
			}
		}
		else{
			if (isupper(s[i]) == 0){
				flag = false;
				break;
			}
		} 
	}
	if (flag) cout << "Yes";
	else cout << "No";
	return 0;
}