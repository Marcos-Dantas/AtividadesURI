#include <bits/stdc++.h>

using namespace std;

int main () {
	double grade1, grade2, grade3;
	
	cin >> grade1 >> grade2 >> grade3;
	double x = ((grade1*2)+(grade2*3)+(grade3*5)) / 10;   	
	cout << "MEDIA = " << fixed << setprecision(1) << x << "\n";
	
	return 0;
}