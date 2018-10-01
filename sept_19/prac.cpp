#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num_1 = 1, num_2 = 243, num_3 = 29734,
	    num_4 = 23, num_5 = 5, num_6 = 1,
	    num_7 = 11021, num_8 = 24, num_9 = 24;

	cout << setw(6) << num_1 << setw(6) << num_2 << setw(6) << num_3 << endl;
	cout << setw(6) << num_4 << setw(6) << num_5 << setw(6) << num_6 << endl;
	cout << setw(6) << num_7 << setw(6) << num_8 << setw(6) << num_9 << endl;

	return 0;
}
