#include <iostream>
#include "compare.h"
using namespace std;

int main()
{
	int var1, var2;
	char result;

	cout << "Enter your first integer : ";
	cin >> var1;
	
	cout << "Enter your second integer : ";
	cin >> var2;

	result = compare(var1, var2);

	if (result == '=')
		cout << var1 << " is equal to " << var2;
	else if (result == '<')
		cout << var1 << " is less than " << var2;
	else if (result == '>')
		cout << var1 << " is greater than " << var2;
	else
		cout << "An error has occured";
	return 0;
}
