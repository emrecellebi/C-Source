#include <iostream>

using namespace std;

int main()
{
	int array[20];
	
	for(int i = 0; i <= 20; i++)
	{
		// for döngüsünü kullnarak değişkene eleman atadık.
		array[i] = i * 8;
	}
	
	for(int i = 0; i <= 20; i++)
	{
		// for dongüsünü kullnarak dğişkenin değerlerini ekrana bastırdık.
		cout << array[i] << endl;
	}
}