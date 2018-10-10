#include <iostream>
#include <string>

#include "person.h"
using namespace std;

int main()
{
	Person people[5];

	for (int i = 0; i < 5; i++)
	{

		string first, last, maiden, town,
		       sw_full, display_name;
	
		cin >> first;
		cin >> last;
		cin >> maiden;
		cin >> town;

		people[i].set_name(first, last);
		people[i].set_maiden(maiden);
		people[i].set_birth(town);

		sw_full = people[i].gen_star_wars();
		display_name = people[i].get_name();

		cout << display_name << " : " << sw_full << endl;
	}

	return 0;
}

