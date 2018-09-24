#include <iostream>
using namespace std;

int main()
{
	double celsius, fahrenheit;
	char choice;
	
	cout << "Do you want to find Celsius (c) or Fahrenheit (f)?" << endl;
	cin >> choice;
	cout << endl;

	if (choice == 'c')
	{
		cout << "Enter Fahrenheit in degrees : ";
		cin >> fahrenheit;
		cout << endl;

		celsius = (fahrenheit - 32)* 5 / 9;

		cout << "That would be " << celsius << " degrees Celsius.";
	}
	else if (choice == 'f')
	{
		cout << "Enter Celsius in degrees : ";
		cin >> celsius;
		cout << endl;

		fahrenheit = (9 * celsius / 5) + 32;

		cout << "That would be " << fahrenheit <<
			" degrees Fahrenheit.";
	}

	return 0;
}
