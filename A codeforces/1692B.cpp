#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define st sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		auto it = v.begin();
		while(it != v.end() - 1){
			if(*it == *it + 1) it = it.erase();
		}
		for(int i = 0; i < n; i++) cout << v[i] << " ";
		cout << endl;
	}
	re;
}

