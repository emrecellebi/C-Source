#include <iostream>

using namespace std;

int main()
{
	/** Dinamik Dizi Heap **/
	// heap aln�nda herzaman yedek bir pointer adresi tan�mlanmal�d�r.
	/// heap p ad�nda eleman olu�tururldu
	
	int *p = new int[10]; //10 elemanl� bir heap aln� olu�turduk ve heapi pointera e�itledik. (adresi ald�k) 
	for(int i=0; i<10; i++)
	{
		p[i] = i*i; // i ile i yi �arpip elemanlar� e�itliyor.
		cout << "p elemanalri: " << p[i] << endl;
	}

	cout << endl;
	cout << "Tasima Isleminden Sonra";
	cout << endl << endl;
	
	/// heap p ad�nda elemanlar heap k ad�na ta��nd�
	int *k = new int[20]; // yeni bir alan yap�l�yor
	for(int ia=0; ia<10; ia++)
	{
		k[ia] = p[ia]; // p deki elemanlar� k ye ta��ma yap�yor
		cout << "k elemanalri: " << k[ia] << endl;
	}
	
	delete[] p; // eski adrsdeki verileri siliyor
	
	cout << endl;
	cout << "k eleman ekleme" << endl << endl;
	
	p = k; /// heap k ad�nda ki adres tekrar heap p ad�na yaz�ld� ve yeni elemanlar eklendi 
	for(int ib=10; ib<20; ib++)
	{
		p[ib] = ib * ib;// ib ile ib yi �arpip elemanlar� e�itliyor.
		cout << "p elemanalri: " << p[ib] << endl;
	}
}