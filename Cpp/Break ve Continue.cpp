#include <iostream>

using namespace std;

int main()
{
	/** Break ve Continue **/
	for(int b = 0; b < 20; b++)
	{
		cout << b << endl;
		if(b == 10)
		{
			break;
		}
	}
	
	for(int c = 0; c < 20; c++)
	{
		cout << c << endl;
		if(c == 10)
		{
			continue;
		}
	}
}