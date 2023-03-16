// ÖRNEK 5 -> STRÝNG YAPIDA ÖRNEK
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");

	string isim;
	string soyisim;
	string meslek;
	int yas;

	cout << "Kullanýcýnýn ismini giriniz: " << endl;
	cin >> isim;
	cout << "Kullanýcýnýn soyismini giriniz: " << endl;
	cin >> soyisim;
	cout << "Kullanýcýnýn yaþýný giriniz: " << endl;
	cin >> yas;
	cout << "Kullanýcýnýn mesleðini giriniz: " << endl;
	cin >> meslek;
	cout << endl;

	cout << "Girmis olduðunuz kullanýcý bilgileri; " << endl;
	cout << "Kullanýcý adý: " << isim << " / " << "Kullanýcýnýn soyismi: " << soyisim << " / " << "Kullanýcýnýn yaþý: " << yas << endl;
	cout << "Kullanýcýnýn mesleði: " << meslek << endl;

	return 0;

}

