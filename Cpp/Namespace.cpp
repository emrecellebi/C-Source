#include <iostream>

using namespace std;

/** isim alan� tan�mlama �a��rma ve input **/
namespace A
{
	int a = 0;
}

int main()
{
	/** isim alan� tan�mlama �a��rma ve input **/
	cout << "Lutfen Isim Alani A Icin Bir Deger Giriniz: ";
	cin >> A::a;
	cout << "Isim Alanindaki Deger: " << A::a << endl << endl;
}