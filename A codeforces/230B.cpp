#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll cnt = 0;
		if(n % 2 == 0) cnt++;
		else if(n % 3 == 0) cnt++;
		else if(n % 5 == 0) cnt++;
		else if(n % 7 == 0) cnt++;
		if(cnt == 2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
