#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Initilaize variables
	float side1, side2, calc_sides, side3;

	//Ask for user input
	cout << "Enter length of first side : ";
	cin >> side1;
	cout << endl;

	cout << "Enter length of second side : ";
	cin >> side2;
	cout << endl;

	//Loop until a negative is entered for side1
	while (side1 >= 0)
	{

		//Calculate
		calc_sides = pow(side1, 2) + pow(side2, 2);
		side3 = pow(calc_sides, 0.5);

		//Output
		cout << "The Hypotenuse is : " << side3 << endl << endl;
		cout << "New triangle. Enter a negative value for first side to exit."
			<< endl;

		//Ask for user input
		cout << "Enter length of first side : ";
		cin >> side1;
		cout << endl;
		if (side1 < 0)
		{
			break;
		}

		cout << "Enter length of second side : ";
		cin >> side2;
		cout << endl;
	}

	return 0;
}

