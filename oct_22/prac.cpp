#include <iostream>
using namespace std;

int main()
{
	int length;
	
	cout << "Enter how many numbers : ";
	cin >> length;

	int nums[length] = {};

	for (int i=0; i < length; i++)
	{
		
		nums[i] = i;
	}
	for (int prac : nums)
	{
		cout << nums[prac] << " ";
	}
	return 0;
}
