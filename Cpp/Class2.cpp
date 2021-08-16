#include <iostream>

using namespace std;

/** Class (S�n�f) Tan�mlama **/
// bir fonksiyon private ise ona d��ar�dan(main) eri�ilemez ama class i�indeki public methodunun i�inde fonksiyon varsa oradanda �a�r�l�r.
class Dikdortgen
{
	public:
		Dikdortgen() //Constructor lar nes olu�turuldu�u andan itibaren otomatik olarak �a�r�l�rlar.
		{
			cout << "Parametresiz Constructure Cagrildi...\n" << endl;
		}
		
		Dikdortgen(int a)
		{
			cout << "Parametreli Constructure Cagrildi...: " << a << endl;
		}
		
		~Dikdortgen() // Destructor �a�r�lan Constructor � yok eder. parametre almaz.
		{
			cout << "Yok Edildi..." << endl;
		}
};

int main()
{
	/** Class (S�n�f) Tan�mlama **/
	Dikdortgen d1;//yan yana iki tane nesne olu�turma �u �ekilde (d1,d2) her Constructure in bir nesnesi olur.
	Dikdortgen d2(22); // constructor �a�r�l�p bitti�i zaman destructor devreye girer ve siler
	
	/*
	
	Dikdortgen d1;
	{
		//Dikdortgen d2(22); // bu�ekilde de kullan�l�r.
	}
	
	*/
}