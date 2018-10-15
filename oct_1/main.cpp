#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	string first_name, last_name, maiden_name, birth_town;
	string part1, part2, part3, part4, sw_first_name, sw_last_name;
	
	cout << "Enter your first name : ";
	cin >> first_name;
	
	cout << "Enter your last name : ";
	cin >> last_name;

	cout << "Enter your mother's maiden name : ";
	cin >> maiden_name;

	cout << "Enter the city where you were born : ";
	cin >> birth_town;
	cout << endl;

	part1 = last_name.substr(0,3);
	part2 = first_name.substr(0,2);
	part3 = maiden_name.substr(0,2);
	part4 = birth_town.substr(0,3);

	sw_first_name = part1 + part2;
	sw_last_name = part3 + part4;

	for(int i=0; i < sw_first_name.length(); i++)
		sw_first_name[i] = tolower(sw_first_name[i]);
	for(int i=0; i < sw_last_name.length(); i++)
		sw_last_name[i] = tolower(sw_last_name[i]);

	sw_first_name[0] = toupper(sw_first_name[0]);
	sw_last_name[0] = toupper(sw_last_name[0]);

	cout << "Your star wars name is ";
	2
	cout << sw_first_name << " " << sw_last_name << endl;

	return 0;
}
