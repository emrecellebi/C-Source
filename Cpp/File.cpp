#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	//app dosya yazma yapýldýkdan sonra dosya ya tekrar yazý yamak için kullanýlýr.
	//setw(20) 20 karakter boþluk býrakarak yazar.
	fstream dosya;
	dosya.open("01.txt", ios::out | ios::in | ios::app);
	
	/** dosya yazma iþlemi. **/
	dosya << "Sierra";
	
	
	/** dosya okuma iþlemi **/
	//char Text[100];
	//dosya >> Text;
	//cout << Text;
	
	/** dosya boþluk býrakma **/
	//dosya << setw(20) << "John";
	
	/** dosya sola saða dayalý yazma **/
	//dosya.setf(ios::left);
	//dosya << "John" << "Sierra";
	
	//dosya.setf(ios::right);
	//dosya << "John" << "Sierra";
	
	
	
	dosya.close();
}