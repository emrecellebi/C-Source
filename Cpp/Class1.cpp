#include <iostream>

using namespace std;

/** Class (S�n�f) Tan�mlama **/
// bir fonksiyon private ise ona d��ar�dan(main) eri�ilemez ama class i�indeki public methodunun i�inde fonksiyon varsa oradanda �a�r�l�r.
class Dikdortgen
{
	private:

		int Yukseklik;
		int Genislik;
		int Alan;
		
		void AlanBul()
		{
			Alan = Genislik * Yukseklik;
			cout << "Alan Sonucu: " << Alan;
		}
		
	public:// D��ar�dan Eri�ile bilinir.
	
		void VeriGir()
		{
			cout << "Yukseklik Gir...: ";
			cin >> Yukseklik;
			cout << "Genislik Gir...: ";
			cin >> Genislik;
			AlanBul(); // s�n�f i�erisindenden ula��labilinir.
		}
};

int main()
{
	/** Class (S�n�f) Tan�mlama **/
	Dikdortgen d1; // s�n�f tan�mlan�r.
	
	d1.VeriGir();
}