#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = m; i <= 10000; i += m){
		if(i > n) break;
		if(i * 2 < n) continue;
		cout << i << endl; return 0;
	}
	cout << -1 << endl;
	return 0;
}

