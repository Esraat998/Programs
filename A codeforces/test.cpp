#include <bits/stdc++.h>
using namespace std;

int main(){
	int x = 10;
	char y = 'k';

	/// 'k' = 107
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	return 0;
}
