#include <iostream>
using namespace std;

int main()
{
	int length;
	
	cout << "Enter how many numbers : ";
	cin >> length;

	int nums[length] = {};

	for (int &i : nums)
	{		
		cout << "Enter " << length << " numbers : ";
		cin >> i;
	}
	for (int prac : nums)
	{
		cout << prac << " ";
	}
	return 0;
}
