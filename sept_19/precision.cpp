#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float sub_total, grand_total;
	const float TAX_RATE = 0.08125;

	cout << "Enter sub total : ";
	cin >> sub_total;
	cout << endl;

	grand_total = sub_total + (sub_total * TAX_RATE);

	cout << fixed << setprecision(2);
	cout << "Grand total is $" << grand_total;

	return 0;
}
