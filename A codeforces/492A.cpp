#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, j = 1, sum = 0, cnt=0, x = 1;
	cin >> n;
	while(1){
		for(int i = 1; i <= x;i++){
			sum += i;
		}
		x++;
		if(sum > n){
			break;
		}
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
