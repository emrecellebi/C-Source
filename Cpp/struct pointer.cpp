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

void VeriGir(Insan* ogr) // Referans Kullanýmý Insan prametresinin yanýn (Insan& ogr) iþareti kullanýrsak bu sever verilerine eriþmek için . kullnýlýr. ama veri deðiþ tiremiyoruz.
{
	cout << "Adi Giriniz...: ";
	cin >> ogr->Ad;
	cout << endl;
	
	cout << "Soyadi Giriniz...: ";
	cin >> ogr->Soyad;
	cout << endl;
	
	cout << "Yasi Giriniz...: ";
	cin >> ogr->YAS;
	cout << endl;
	
	cout << "TCNO Giriniz...: ";
	cin >> ogr->TCNO;
	cout << endl;
}

/** Referans **/
void arttir(int& a)
{
	a++;
}

int main()
{
	/** struct Deðiþken Tanýmlama **/
	Insan ogr1;
	VeriGir(&ogr1);
	
	cout << endl;
	
	/** Referans **/
	int b = 15;
	cout << "Integer : " << b << endl << endl;
	arttir(b);
	cout << "Refrans Islemi: " << b;
}