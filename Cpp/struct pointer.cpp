#include <iostream>

using namespace std;

/** struct De�i�ken Tan�mlama **/
struct Insan
{
	char Ad[100];
	char Soyad[100];
	int TCNO;
	int YAS;
};

void VeriGir(Insan* ogr) // Referans Kullan�m� Insan prametresinin yan�n (Insan& ogr) i�areti kullan�rsak bu sever verilerine eri�mek i�in . kulln�l�r. ama veri de�i� tiremiyoruz.
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
	/** struct De�i�ken Tan�mlama **/
	Insan ogr1;
	VeriGir(&ogr1);
	
	cout << endl;
	
	/** Referans **/
	int b = 15;
	cout << "Integer : " << b << endl << endl;
	arttir(b);
	cout << "Refrans Islemi: " << b;
}