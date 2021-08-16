#include <iostream>

using namespace std;

/** define kavramı **/
#define say 200 //define bir değişken türüdür(int, float ... gibi hafızda yer kaplamaz) say adında bir define değişkenimiz var değeri 200 olan


int main()
{
	int i = 25;
	float f = 3.14;
	double d = 458.25;
	char c = 'A';
	bool b = true;
	long int li = 25252;
	long double ld = 2555484.255;
	wchar_t wc;
	long l = 2254554;
	string s = "Hello World";
	unsigned int ui;
	
	cout << "Define Degeri : " << say << endl;
	
	cout << "Integer: " << i << endl;
	cout << "Float: " << f << endl;
	cout << "Double: " << d << endl;
	cout << "Char: " << c << endl;
	cout << "Boolean: " << b << endl;
	cout << "Long Integer: " << li << endl;
	cout << "Long Double: " << ld << endl;
	cout << "Wchar_t: " << wc << endl;
	cout << "Long: " << l << endl;
	cout << "String: " << s << endl;
	cout << "unsigned degeri: " << ui << endl;
	
	const int cons = 255; //başka bir kod tarafında sğiştirilemez
	cout << "const(sabit) degeri: " << cons << endl << endl;
}
