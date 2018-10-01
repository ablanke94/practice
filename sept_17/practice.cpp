#include <iostream>
using namespace std;

int main()
{
	const double YEN_PER_DOLLAR = 120.005, EUROS_PER_DOLLAR = .881;
	double dollars, yen, euros;

	cout << "Enter your dollars : ";
	cin >> dollars;
	cout << endl;
	
	euros = dollars * EUROS_PER_DOLLAR;
	yen = dollars * YEN_PER_DOLLAR;

	cout << "That would be " << euros << " Euros, or " << yen << " yen." << endl;
	return 0;
}

