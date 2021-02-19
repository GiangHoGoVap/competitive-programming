#include <iostream>
using namespace std;
 
const long long INF = 1e18;
int main() {
    int N;
    cin >> N;
    bool a = false;
    long long ans = 1;
    while (N--) {
        long long b;
        cin >> b;
        if (b == 0) {
        	cout << 0 << endl;
            return 0;
        }
        if (INF / b < ans) a = true;
        ans *= b;
    }
    if (a) ans = -1;
    if (ans > INF) ans = -1;
    cout << ans;
    return 0;
}