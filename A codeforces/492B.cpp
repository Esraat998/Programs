#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, l, m = 0;
	cin >> n >> l;
	vector <int> v;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n - 1; i++){
		if(v[i + 1] - v[i] > m){
			m = v[i + 1] - v[i];
		}
	}
	double x = v[0];
	double y = (double)m / 2;
	double ans = max(x, y);
	double z = l - v[n - 1];
	ans = max(ans, z);
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}
