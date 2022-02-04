#include <bits/stdc++.h>

using namespace std;

int main () {
	int A,B,C, maior;
	
	cin >> A >> B >> C;
	maior = (A+B+abs(A-B)) / 2;
	maior = (maior+C+abs(maior-C)) / 2;
	
	cout << maior << " eh o maior\n"; 
	
	return 0;
}