#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		vector <int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		if(v[0] == v[1]){
			cout << "YES" << endl;
			if(v[0] == v[1] && v[1] == v[2]) cout << v[0] << " " << v[1] << " " << v[2] << endl;
			else cout << v[0] << " " << v[2] << " " << 1 << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
