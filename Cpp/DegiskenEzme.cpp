#include <iostream>

using namespace std;

/** Global deðiþken Burada tanýmlanýr **/
//int say = 0;// tanýlandýðýmýz zaman sýfýra eþitlenmelidir program kapatýlana kadar hafýzada kalýr


/** Deðiþken Ezme **/
void fon()
{
	int sayi1 = 41;
	cout << sayi1 << endl;
}

int main()
{
	/** Deðiþke Ezme **/
	int sayi1 = 10;
	{
		int sayi1 = 21;
		{
			int sayi1 = 31;
			cout << sayi1 << endl;// burada 31 deðerini ekrana yazdýrýr.
		}
		cout << sayi1 << endl;// burada 21 deðerini ekrana yazdýrýr.
	}
	cout << sayi1 << endl;// burada 10 deðerini ekrana yazdýrýr.
	fon();// tanýmlý fonksiyonu çaðýrma
	cout << endl;
}