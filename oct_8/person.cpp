#include <iostream>
#include <string>

#include "person.h"
using namespace std;

string lowercase(string word)
{
	for (int i=0; i < word.length(); i++)
		word[i] = tolower(word[i]);
	return word;
}

string capscase(string first, string last)
{
	first[0] = toupper(first[0]);
	last[0] = toupper(last[0]);
	return (first + " " + last);
}


void Person::set_name(string first, string last)
{
	first_name = first;
	last_name = last;
}

void Person::set_maiden(string maiden)
{
	maiden_name = maiden;
}

void Person::set_birth(string town)
{
	birth_town = town;
}

string Person::get_name()
{
	return (first_name + " " + last_name);
}

string Person::gen_star_wars(void)
{
	string part1, part2, part3, part4,
	       sw_part1, sw_part2, sw_full;

	part1 = last_name.substr(0, 3);
	part2 = first_name.substr(0, 2);
	part3 = maiden_name.substr(0, 2);
	part4 = birth_town.substr(0, 3);

	sw_part1 = lowercase(part1) + lowercase(part2);
	sw_part2 = lowercase(part3) + lowercase(part4);

	sw_full = capscase(sw_part1, sw_part2);

	return sw_full;
}
