#include <iostream>

using namespace std;

/** İşaretçiler. **/
void Arttir(int *ab)// işaretçi olarak değişken tanımlanması gerekir.
{
	//ab++;// bu sekilde işaretçin içerisinde tutuduğu adresi artırır.
	(*ab)++;// işaretçini gösterdiği değişkenin değerini arrtırır.
}

int main()
{
	/** İşaretçiler Pointerlar **/
	int sayi1 = 0;
	int* p = &sayi1; // işaretçi bir değişken tanımlandı ve sayi1 değişkeninin adresi alındı
	
	cout << "p...: " << p << endl; // ekrana p içerisinde tutulduğu hex değeri yazar.
	cout << "&sayi1...: " << &sayi1 << endl; // sayi1 in adresini yaz dırır.
	cout << "*p...: " << *p << endl; // adresdeki değeri getir ekrana yaz.
	cout << "sayi1...: " << sayi1 << endl << endl; // sayi1 dğerini yazar.
	
	*p = 220;// sayi1 değişkenine adres ile değer ataması yapılıyor. p nin gösterdiği hücre değiş miyor sayi1 değeri değişiyor.
	
	cout << "Deger Degisimi" << endl << endl;
	cout << "p...: " << p << endl; // ekrana p içerisinde tutulduğu hex değeri yazar.
	cout << "&sayi1...: " << &sayi1 << endl; // sayi1 in adresini yaz dırır.
	cout << "*p...: " << *p << endl; // adresdeki değeri getir ekrana yaz.
	cout << "sayi1...: " << sayi1 << endl << endl; // sayi1 dğerini yazar.
	
	
	cout << "Artirmadan once...: " << sayi1 << endl;
	Arttir(&sayi1);// eğer bir paremetrenin fonksiyon içerisinde değişmesi isteniyorsa paremetreyi işaretçi olarak kullanılması gerekir. praemetre olarak sayi1 değişkenini değilde onun adresini vermemiz gerekir.
	cout << "Artirmadan sonra....: " << sayi1 << endl << endl;	
	
	
	
	int aa[] = {1,2,3,4,5,6,7,8,9,10};
	int *pw = aa;
	
	cout << "pw....: " << *pw << endl;// arrayyin 0. elemanındaki değeri yazdırır
	cout << "pw[5] " << pw[5] << endl;// arrayyin 5. elemanındaki değeri yazdırır
	
	for(int ii = 0; ii < 10; ii++)
	{
		cout << "pw...: " << pw+ii << " "; // burada hafıza adresini 4 byte 4 byte artırır.
		cout << "*(pw+" << ii << ")...: " << *(pw+ii) << endl; // bunun yerinie *(pw+ii)    buşekildede kullanılır p[ii] adres deki değeri getirip ekrana yazdırır.
	}
}