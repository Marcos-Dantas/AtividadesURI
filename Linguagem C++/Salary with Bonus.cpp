#include <bits/stdc++.h>

using namespace std;

int main () {
	string name;
	double salary, solds;
	
	cin >> name >> salary >> solds;
	cout << "TOTAL = R$ " << fixed << setprecision(2) << salary + (solds * 0.15) << "\n";

	return 0;
}