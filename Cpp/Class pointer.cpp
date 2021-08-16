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
			cout << "Ogrenci " << a << " " << b << endl;// a deðiþkenine eriþe bilmek için çalýþa katýlýmýna ihtiyaç duyar.
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
	//Casting(Dönüþüm)
	//Yukarý Dönüþüm(Up Casting)
	//Aþaðý Dönüþüm(Down Casting)
	//Overriding()
	
	Ogrenci* p = new Ogrenci;
	Akademisyen* a = new Akademisyen;
	Calisan* c = new Calisan;
	
	p->Yaz();// ögrenci sýnýfýndaki yaz methodunu çaðrýr.
	cout << endl;
	
	// calýþan sýnýfýndaki yaz fonksiyonuna virtual konulmadan önce o fonksiyonu çaðýrdý
	// calýþan sýnýfýndaki yaz fonksiyonuna virtual konuldukdan sonra ögrenci sýnýfýndaki yaz fonksiyonunu çaðýrdý.
	Calisan* r = p;// p yi r ye eþitliyoruz.
	r -> Yaz();
	cout << endl;
	
	cout << sizeof(Calisan) << endl;// Calisan kalýtým almadýðý için int deðeri 4 byte oldu
	cout << sizeof(Ogrenci) << endl;// Ogrenci kalýtým aldýðý için int deðeri 8 byte oldu
	cout << sizeof(Akademisyen) << endl;//Akademisyen kalýtým aldýðý için int deðeri 8 byte oldu
}