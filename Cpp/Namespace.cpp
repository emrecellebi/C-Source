#include <iostream>

using namespace std;

/** isim alaný tanýmlama çaðýrma ve input **/
namespace A
{
	int a = 0;
}

int main()
{
	/** isim alaný tanýmlama çaðýrma ve input **/
	cout << "Lutfen Isim Alani A Icin Bir Deger Giriniz: ";
	cin >> A::a;
	cout << "Isim Alanindaki Deger: " << A::a << endl << endl;
}