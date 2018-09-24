#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	unsigned seed;

	seed = time(0);
	srand(seed);

	int sides = 6, result;
	char again;
	
	cout << "Rolling the dice..." << endl;

	result = (rand() % 6) + 1;

	cout << "Result : ";
	cout << result << endl;

	cout << "Roll again? (y/n) : ";
	cin >> again;

	while (again == 'y')
	{
		cout << "Rolling the dice..." << endl;

		result = (rand() % 6) + 1;

		cout << "Result : ";
		cout << result << endl;

		cout << "Roll again? (y/n) : ";
		cin >> again;
	}
	return 0;
}
