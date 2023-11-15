#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Using Leibniz Formula

int main() {
	long long int machine_limit = 2001000000;
	double pi = 2.0;
	for (int i = 2; i <= machine_limit; i += 2)
		pi = pi * (i / (i - 1.0)) * (i / (i + 1.0));
	cout << fixed << setprecision(20) << pi << endl;

	int arrPiCheck[52] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5, 0, 2, 8, 8, 4, 1, 9, 7, 1, 6, 9, 3, 9, 9, 3, 7, 5, 1, 0, 5 };

	for (long long int i = 0; i < 52; i++) {
		if (arrPiCheck[i] == ( (int)(pi * pow(10, i)) % 10) ) {
			cout << arrPiCheck[i];
		}
		else {
			cout << "Incorrect\n";
		}
	}


}
