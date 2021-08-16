#include <iostream>

using namespace std;

/** ��aret�iler. **/
void Arttir(int *ab)// i�aret�i olarak de�i�ken tan�mlanmas� gerekir.
{
	//ab++;// bu sekilde i�aret�in i�erisinde tutudu�u adresi art�r�r.
	(*ab)++;// i�aret�ini g�sterdi�i de�i�kenin de�erini arrt�r�r.
}

int main()
{
	/** ��aret�iler Pointerlar **/
	int sayi1 = 0;
	int* p = &sayi1; // i�aret�i bir de�i�ken tan�mland� ve sayi1 de�i�keninin adresi al�nd�
	
	cout << "p...: " << p << endl; // ekrana p i�erisinde tutuldu�u hex de�eri yazar.
	cout << "&sayi1...: " << &sayi1 << endl; // sayi1 in adresini yaz d�r�r.
	cout << "*p...: " << *p << endl; // adresdeki de�eri getir ekrana yaz.
	cout << "sayi1...: " << sayi1 << endl << endl; // sayi1 d�erini yazar.
	
	*p = 220;// sayi1 de�i�kenine adres ile de�er atamas� yap�l�yor. p nin g�sterdi�i h�cre de�i� miyor sayi1 de�eri de�i�iyor.
	
	cout << "Deger Degisimi" << endl << endl;
	cout << "p...: " << p << endl; // ekrana p i�erisinde tutuldu�u hex de�eri yazar.
	cout << "&sayi1...: " << &sayi1 << endl; // sayi1 in adresini yaz d�r�r.
	cout << "*p...: " << *p << endl; // adresdeki de�eri getir ekrana yaz.
	cout << "sayi1...: " << sayi1 << endl << endl; // sayi1 d�erini yazar.
	
	
	cout << "Artirmadan once...: " << sayi1 << endl;
	Arttir(&sayi1);// e�er bir paremetrenin fonksiyon i�erisinde de�i�mesi isteniyorsa paremetreyi i�aret�i olarak kullan�lmas� gerekir. praemetre olarak sayi1 de�i�kenini de�ilde onun adresini vermemiz gerekir.
	cout << "Artirmadan sonra....: " << sayi1 << endl << endl;	
	
	
	
	int aa[] = {1,2,3,4,5,6,7,8,9,10};
	int *pw = aa;
	
	cout << "pw....: " << *pw << endl;// arrayyin 0. eleman�ndaki de�eri yazd�r�r
	cout << "pw[5] " << pw[5] << endl;// arrayyin 5. eleman�ndaki de�eri yazd�r�r
	
	for(int ii = 0; ii < 10; ii++)
	{
		cout << "pw...: " << pw+ii << " "; // burada haf�za adresini 4 byte 4 byte art�r�r.
		cout << "*(pw+" << ii << ")...: " << *(pw+ii) << endl; // bunun yerinie *(pw+ii)    bu�ekildede kullan�l�r p[ii] adres deki de�eri getirip ekrana yazd�r�r.
	}
}