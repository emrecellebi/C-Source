#include <iostream>

using namespace std;

/** Kat�l�m (Inheritance) **/

class Kayit
{
	public:
		int a;
		string yaz;
		
		Kayit()
		{
			// bo� constractor
		}
		
		void Yazdir()
		{
			cout << "a Degeri: " << a << " String: " << yaz << endl << endl;
		}
};

// ba�ka bir class dan ba�kabir class �n i�indeki verilere eri�mek i�in kal�t�m yap�l�r
class Sierra:public Kayit
{
	public:
		Sierra()
		{
			a = 25;
			yaz = "Sierra McCormick";
		}
};

class John:public Kayit
{
	public:
		John()
		{
			a = 35;
			yaz = "John Winchester";
		}
};

int main()
{
	Sierra s1;
	john j1;
	
	s1.Yazdir();
	j1.Yazdir();
}