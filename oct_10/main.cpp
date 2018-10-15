#include <iostream>
#include <string>

#include "person.h"
using namespace std;

int main()
{
	int const MAX_PEOPLE = 5;
	Person people[MAX_PEOPLE];

	for (int i = 0; i < MAX_PEOPLE; i++)
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

