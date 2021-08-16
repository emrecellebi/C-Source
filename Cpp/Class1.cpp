#include <iostream>

using namespace std;

/** Class (Sýnýf) Tanýmlama **/
// bir fonksiyon private ise ona dýþarýdan(main) eriþilemez ama class içindeki public methodunun içinde fonksiyon varsa oradanda çaðrýlýr.
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
		
	public:// Dýþarýdan Eriþile bilinir.
	
		void VeriGir()
		{
			cout << "Yukseklik Gir...: ";
			cin >> Yukseklik;
			cout << "Genislik Gir...: ";
			cin >> Genislik;
			AlanBul(); // sýnýf içerisindenden ulaþýlabilinir.
		}
};

int main()
{
	/** Class (Sýnýf) Tanýmlama **/
	Dikdortgen d1; // sýnýf tanýmlanýr.
	
	d1.VeriGir();
}