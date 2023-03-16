//Örnek 1
#include <iostream> 
using namespace std; 
int main() {
	string isim;
	int yas;
	string bolum;
	cout << "Lutfen adinizi girin: " << endl;
	cin >> isim;
	cout << "Lutfen yasinizi girin: " << endl;
	cin >> yas;
	cout << "Lutfen bolumunuzu girin: " << endl;
	cin >> bolum;
	cout << "Kullanicinin ismi: " << isim << endl;
	cout << "Kullanicinin yasi: " << yas << endl;
	cout << "Kullanicinin okudugu bolum: " << bolum << endl;

	return 0; 
}
// ---------------------------------------------------------------------------
//Örnek 2 
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");
	float sayi1;
	float sayi2;
	float toplam;
    float cýkar;
	float bol;
	float carp; 


	cout << "Lütfen iki sayi giriniz: " << endl;
	cout << "Birinci sayi: ";
	cin >> sayi1;
	cout << "Ýkinci sayi: ";
	cin >> sayi2;
	
	toplam = sayi1 + sayi2;
	cýkar = sayi1 - sayi2;
	carp = sayi1 * sayi2;
	bol = sayi1 / sayi2;


	cout << "Sayýlarýn toplamlarý: "<<toplam << endl;
	cout << "Sayýlarýn cýkarmasý: " << cýkar << endl;
	cout << "Sayýlarýn carpýmý: " << carp <<endl;
	cout << "Sayýlarýn bölümü: " << bol << endl;


	return 0; 
}
