#include <bits/stdc++.h>

using namespace std;

int main () {
	int num, hours;
	double salary;
	
	cin >> num >> hours >> salary;
	cout << "NUMBER = " << num << "\n" << "SALARY = U$ " << fixed << setprecision(2) << hours * salary << "\n";

	return 0;
}