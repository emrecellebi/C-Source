#include <iostream>

using namespace std;

/** Global de�i�ken Burada tan�mlan�r **/
//int say = 0;// tan�land���m�z zaman s�f�ra e�itlenmelidir program kapat�lana kadar haf�zada kal�r


/** De�i�ken Ezme **/
void fon()
{
	int sayi1 = 41;
	cout << sayi1 << endl;
}

int main()
{
	/** De�i�ke Ezme **/
	int sayi1 = 10;
	{
		int sayi1 = 21;
		{
			int sayi1 = 31;
			cout << sayi1 << endl;// burada 31 de�erini ekrana yazd�r�r.
		}
		cout << sayi1 << endl;// burada 21 de�erini ekrana yazd�r�r.
	}
	cout << sayi1 << endl;// burada 10 de�erini ekrana yazd�r�r.
	fon();// tan�ml� fonksiyonu �a��rma
	cout << endl;
}