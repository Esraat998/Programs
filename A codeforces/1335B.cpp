#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s = "";
		int n, a, b;
		cin >> n >> a >> b;
		for(int i = 0; i < n; i++){
			s += ('a' + i % b);
		}
		cout << s << endl;
	}
}
