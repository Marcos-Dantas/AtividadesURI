#include <bits/stdc++.h>

using namespace std;

int main () {
	double R, pi = 3.14159;
	cin >> R;
	
	cout << "VOLUME = " << fixed << setprecision(3) << (4.0/3) * pi * (R*R*R) << "\n";

	return 0;
}