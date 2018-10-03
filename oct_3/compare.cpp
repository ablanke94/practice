using namespace std;

char compare(int param1, int param2)
{
	if (param1 == param2)
	{
		param1 = -param1;
		param2 = -param2;
		return '=';
	}
	else if (param1 < param2)
	{
		param1 = -param1;
		param2 = -param2;
		return '<';
	}
	else if (param1 > param2)
	{
		param1 = -param1;
		param2 = -param2;
		return '>';
	}
	else
		return '?';
}
