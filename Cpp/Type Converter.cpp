#include <iostream>

using namespace std;

int main()
{
	/// Type Converter
	/** float de�erinden intgera d�n��t�rme **/
	int c = 0;
	float d = 2.5f;
	cout << "int Degeri: " << c << endl;
	cout << "float Degeri: " << d << endl;
	c = (int)d;// floatdan integera d�n��me
	cout << "Donusme olmus degeri: " << c << endl << endl;
}