#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;


string capscase(string, string);
string lowercase(string);

class Person
{
	public:
		string first_name;
		string last_name;
		string maiden_name;
		string birth_town;

	//public:
		void set_name(string, string);
		void set_maiden(string);
		void set_birth(string);

		string gen_star_wars(void);
};

#endif
