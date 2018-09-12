#include <iostream>
using namespace std;

int main()
{
	int total_cookies, eaten_cookies, serving_size, serving_calories, eaten_calories,
	    serving_cookies;
	cout << "How many cookies are in the bag? : ";
	cin >> total_cookies;
	cout << endl;
	cout << "How many cookies did you eat fatty? : ";
	cin >> eaten_cookies;
	cout << endl;
	cout << "How many servings are in the bag? : ";
	cin >> serving_size;
	cout << endl;
	cout << "How many calories are in each serving? : ";
	cin >> serving_calories;
	cout << endl;

	serving_cookies = total_cookies / serving_size;
	eaten_calories = (static_cast<double>(eaten_cookies) / serving_cookies)
		* serving_calories;

	cout << "That's a whopping " << eaten_calories << " calories, hit the gym.";

	return 0;
}	
