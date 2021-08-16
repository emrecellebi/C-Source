#include <iostream>

using namespace std;

/** Class (Sýnýf) Tanýmlama **/
// bir fonksiyon private ise ona dýþarýdan(main) eriþilemez ama class içindeki public methodunun içinde fonksiyon varsa oradanda çaðrýlýr.
class Dikdortgen
{
	public:
		Dikdortgen() //Constructor lar nes oluþturulduðu andan itibaren otomatik olarak çaðrýlýrlar.
		{
			cout << "Parametresiz Constructure Cagrildi...\n" << endl;
		}
		
		Dikdortgen(int a)
		{
			cout << "Parametreli Constructure Cagrildi...: " << a << endl;
		}
		
		~Dikdortgen() // Destructor Çaðrýlan Constructor ý yok eder. parametre almaz.
		{
			cout << "Yok Edildi..." << endl;
		}
};

int main()
{
	/** Class (Sýnýf) Tanýmlama **/
	Dikdortgen d1;//yan yana iki tane nesne oluþturma þu þekilde (d1,d2) her Constructure in bir nesnesi olur.
	Dikdortgen d2(22); // constructor çaðrýlýp bittiði zaman destructor devreye girer ve siler
	
	/*
	
	Dikdortgen d1;
	{
		//Dikdortgen d2(22); // buþekilde de kullanýlýr.
	}
	
	*/
}