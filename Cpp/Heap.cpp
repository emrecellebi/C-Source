#include <iostream>

using namespace std;

int main()
{
	/** Dinamik Dizi Heap **/
	// heap alnýnda herzaman yedek bir pointer adresi tanýmlanmalýdýr.
	/// heap p adýnda eleman oluþtururldu
	
	int *p = new int[10]; //10 elemanlý bir heap alný oluþturduk ve heapi pointera eþitledik. (adresi aldýk) 
	for(int i=0; i<10; i++)
	{
		p[i] = i*i; // i ile i yi çarpip elemanlarý eþitliyor.
		cout << "p elemanalri: " << p[i] << endl;
	}

	cout << endl;
	cout << "Tasima Isleminden Sonra";
	cout << endl << endl;
	
	/// heap p adýnda elemanlar heap k adýna taþýndý
	int *k = new int[20]; // yeni bir alan yapýlýyor
	for(int ia=0; ia<10; ia++)
	{
		k[ia] = p[ia]; // p deki elemanlarý k ye taþýma yapýyor
		cout << "k elemanalri: " << k[ia] << endl;
	}
	
	delete[] p; // eski adrsdeki verileri siliyor
	
	cout << endl;
	cout << "k eleman ekleme" << endl << endl;
	
	p = k; /// heap k adýnda ki adres tekrar heap p adýna yazýldý ve yeni elemanlar eklendi 
	for(int ib=10; ib<20; ib++)
	{
		p[ib] = ib * ib;// ib ile ib yi çarpip elemanlarý eþitliyor.
		cout << "p elemanalri: " << p[ib] << endl;
	}
}