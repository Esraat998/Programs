#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		cout << max(a, b) - min(a, b) << endl;
	}
	return 0;
}



