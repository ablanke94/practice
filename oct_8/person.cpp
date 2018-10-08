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
	return (first_name + " " + last_name)
}
