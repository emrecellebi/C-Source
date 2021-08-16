#include <iostream>

using namespace std;

/** struct Deðiþken Tanýmlama **/
struct Insan
{
	char Ad[100];
	char Soyad[100];
	int TCNO;
	int YAS;
};

Insan VeriGir()
{
	Insan ogr;
	
	cout << "Adi Giriniz...: ";
	cin >> ogr.Ad;
	cout << endl;
	
	cout << "Soyadi Giriniz...: ";
	cin >> ogr.Soyad;
	cout << endl;
	
	cout << "Yasi Giriniz...: ";
	cin >> ogr.YAS;
	cout << endl;
	
	cout << "TCNO Giriniz...: ";
	cin >> ogr.TCNO;
	cout << endl;
	
	return ogr;
}

bool Karsilastir(Insan d1, Insan d2)
{
	if(d1.TCNO == d2.TCNO)
		return true;
	
	return false;
};

int main()
{
	/** struct Deðiþken Tanýmlama **/
	Insan ogr1 = VeriGir();
	Insan ogr2 = VeriGir();
	if(Karsilastir(ogr1, ogr2))
	{
		cout << "Ikiside Ayni...";
	}
	else
	{
		cout << "Ayni Degil...";
	}
}