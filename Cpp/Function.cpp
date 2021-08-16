#include <iostream>

using namespace std;

void Test1();
void Test2(int, int);
int Test3();
int Test4(int, int);

int main()
{
	/// Not: Fonksiyonları main fonksiyonunun altında tanıladığımız için bun ları tanımıyacak 
	///	oyüzden tanımlamak gereklidir.
	/// tanılama işlemide main fonksiyonu üzerinde yapıldığı gibi olucaktır.
	Test1();
	Test2(25,35);
	cout << Test3() << endl;
	cout << Test4(25,45) << endl;
}

void Test1()
{
	// type void olan parametre almayan bir fonksiyon tanımı.
	cout << "Test1 Cagrildi" << endl;
}

void Test2(int x, int y)
{
	// Type void olan parametre alan bir fonksiyon tanımı
	cout << "Test2 Cagrildi" << endl;
}

int Test3()
{
	// Type int olan parametre almayan bir fonksiyon tanımı.
	return 180 / 3.14 * 2;
}

int Test4(int x, int y)
{
	// Type int olan parametre alan bir fonksiyon tanımı.
	return x * y;
}