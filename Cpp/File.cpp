#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	//app dosya yazma yap�ld�kdan sonra dosya ya tekrar yaz� yamak i�in kullan�l�r.
	//setw(20) 20 karakter bo�luk b�rakarak yazar.
	fstream dosya;
	dosya.open("01.txt", ios::out | ios::in | ios::app);
	
	/** dosya yazma i�lemi. **/
	dosya << "Sierra";
	
	
	/** dosya okuma i�lemi **/
	//char Text[100];
	//dosya >> Text;
	//cout << Text;
	
	/** dosya bo�luk b�rakma **/
	//dosya << setw(20) << "John";
	
	/** dosya sola sa�a dayal� yazma **/
	//dosya.setf(ios::left);
	//dosya << "John" << "Sierra";
	
	//dosya.setf(ios::right);
	//dosya << "John" << "Sierra";
	
	
	
	dosya.close();
}