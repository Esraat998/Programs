#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	string s;
	cin >> a >> b >> s;
	for(int i = 0 ; i < b; i++){
		for(int j = 0; j < a; j++){
			if(s[j] == 'B' && s[j+1] == 'G'){
				s[j] = 'G';
				s[j+1] = 'B';
				j++;
			}
		}
	}
	cout << s << endl;
	return 0;
}
