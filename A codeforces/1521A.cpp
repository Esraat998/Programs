#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		if(b == 1) cout << "NO" << endl;
		else if(b == 2){
			cout << "YES" << endl;
			cout << a << " " << a * b << " " << a + (a * b) << endl;
		}
		else{
			cout << "YES" << endl;
			cout << a << " " << (a * b) - a << " " << a * b << endl;
		}
	}
	return 0;
}
