#include <iostream>

using namespace std;

class Calisan
{
	public:
		int a;
		Calisan()
		{
			a = 0;
		}
		
		void Yaz()
		{
			cout << "Calisan " << a << endl;
		}
};

class Ogrenci:public Calisan
{
	public:
		int b;
		Ogrenci()
		{
			b = 0;
		}
		
		void Yaz()
		{
			cout << "Ogrenci " << a << " " << b << endl;// a de�i�kenine eri�e bilmek i�in �al��a kat�l�m�na ihtiya� duyar.
		}
};

class Akademisyen:public Calisan
{
	public:
		int c;
		Akademisyen()
		{
			c = 0;
		}
		
		void Yaz()
		{
			cout << "Akademisyen " << a << " " << c << endl;
		}
};

int main()
{
	
	/** Fonksiyon Ezme (Overriding()) **/
	//Casting(D�n���m)
	//Yukar� D�n���m(Up Casting)
	//A�a�� D�n���m(Down Casting)
	//Overriding()
	
	Ogrenci* p = new Ogrenci;
	Akademisyen* a = new Akademisyen;
	Calisan* c = new Calisan;
	
	p->Yaz();// �grenci s�n�f�ndaki yaz methodunu �a�r�r.
	cout << endl;
	
	// cal��an s�n�f�ndaki yaz fonksiyonuna virtual konulmadan �nce o fonksiyonu �a��rd�
	// cal��an s�n�f�ndaki yaz fonksiyonuna virtual konuldukdan sonra �grenci s�n�f�ndaki yaz fonksiyonunu �a��rd�.
	Calisan* r = p;// p yi r ye e�itliyoruz.
	r -> Yaz();
	cout << endl;
	
	cout << sizeof(Calisan) << endl;// Calisan kal�t�m almad��� i�in int de�eri 4 byte oldu
	cout << sizeof(Ogrenci) << endl;// Ogrenci kal�t�m ald��� i�in int de�eri 8 byte oldu
	cout << sizeof(Akademisyen) << endl;//Akademisyen kal�t�m ald��� i�in int de�eri 8 byte oldu
}