#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, cnt = 0;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if(a != b) {
			cout << "Happy Alex" << endl;
			return 0;
		}
	}
	cout << "Poor Alex" << endl;
	return 0;
}
