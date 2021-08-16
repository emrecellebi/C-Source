#include <iostream>

using namespace std;

/** Katýlým (Inheritance) **/

class Kayit
{
	public:
		int a;
		string yaz;
		
		Kayit()
		{
			// boþ constractor
		}
		
		void Yazdir()
		{
			cout << "a Degeri: " << a << " String: " << yaz << endl << endl;
		}
};

// baþka bir class dan baþkabir class ýn içindeki verilere eriþmek için kalýtým yapýlýr
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