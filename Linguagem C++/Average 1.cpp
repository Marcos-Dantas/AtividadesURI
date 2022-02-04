#include <bits/stdc++.h>

using namespace std;

int main () {
	double grade1, grade2;
	
	cin >> grade1 >> grade2;
	double x = ((grade1*3.5)+(grade2*7.5)) / 11;   	
	cout << "MEDIA = " << fixed << setprecision(5) << x << "\n";
	
	return 0;
}