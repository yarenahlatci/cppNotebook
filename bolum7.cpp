// �RNEK 5 -> STR�NG YAPIDA �RNEK
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");

	string isim;
	string soyisim;
	string meslek;
	int yas;

	cout << "Kullan�c�n�n ismini giriniz: " << endl;
	cin >> isim;
	cout << "Kullan�c�n�n soyismini giriniz: " << endl;
	cin >> soyisim;
	cout << "Kullan�c�n�n ya��n� giriniz: " << endl;
	cin >> yas;
	cout << "Kullan�c�n�n mesle�ini giriniz: " << endl;
	cin >> meslek;
	cout << endl;

	cout << "Girmis oldu�unuz kullan�c� bilgileri; " << endl;
	cout << "Kullan�c� ad�: " << isim << " / " << "Kullan�c�n�n soyismi: " << soyisim << " / " << "Kullan�c�n�n ya��: " << yas << endl;
	cout << "Kullan�c�n�n mesle�i: " << meslek << endl;

	return 0;

}

