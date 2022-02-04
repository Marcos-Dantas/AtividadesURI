#include <bits/stdc++.h>

using namespace std;

int main () {
	int codeP, contP; 
	double priceP, res = 0;

	for(int i = 0; i < 2; i++) {
		cin >> codeP >> contP >> priceP;
		res = res + (contP * priceP); 
	}
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << res << "\n";

	return 0;
}