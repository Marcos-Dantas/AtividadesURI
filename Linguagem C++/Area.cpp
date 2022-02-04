#include <bits/stdc++.h>

using namespace std;

int main () {
	double A,B,C, pi = 3.14159;
	cin >> A >> B >> C;
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << (A*C) / 2 << "\n"; 
	cout << "CIRCULO: " << fixed << setprecision(3) << pi * (C*C) << "\n"; 
	cout << "TRAPEZIO: " << fixed << setprecision(3) << ((A + B) * C) / 2 << "\n"; 
	cout << "QUADRADO: " << fixed << setprecision(3) << B*B << "\n"; 
	cout << "RETANGULO: " << fixed << setprecision(3) << A*B << "\n"; 
	
	return 0;
}