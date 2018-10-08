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
		       part1, part2, part3, part4,
		       sw_part1, sw_part2, sw_full;
	
		cin >> first;
		cin >> last;
		cin >> maiden;
		cin >> town;

		people[i].set_name(first, last);
		people[i].set_maiden(maiden);
		people[i].set_birth(town);

		part1 = people[i].last_name.substr(0, 3);
		part2 = people[i].first_name.substr(0, 2);
		part3 = people[i].maiden_name.substr(0, 2);
		part4 = people[i].birth_town.substr(0, 3);

		sw_part1 = lowercase(part1) + lowercase(part2);
		sw_part2 = lowercase(part3) + lowercase(part4);

		sw_full = capscase(sw_part1, sw_part2);
		cout << sw_full << endl;
	}
	return 0;
}

