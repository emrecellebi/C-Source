#include <iostream>

using namespace std;

int main()
{
	// 0 veriladeğinde ekrana 0 yazıcak
	// 1 veriladeğinde ekrana 1 yazıcak
	// yanlış bir sayı verildiğinde ise ekrana default yazıcak
	
	switch(25)
	{
		case 0:
			cout << "0";
		break;
		case 1:
			cout << "1";
		break;
		default:
			cout << "Default";
		break;
	}
}
