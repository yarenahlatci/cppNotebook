//ÖRNEK 2 -> DAİRENİN ALANI VE ÇEVRESİNİ HESAPLAYAN PROGRAM
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");
	float daireninyariçapi;
	float cevre;
	float alan;
	cout << "Dairenin yari çapini giriniz: ";
	cin >> daireninyariçapi;

	cevre = 2 * 3.14 * daireninyariçapi;
	alan = 3.14 * daireninyariçapi * daireninyariçapi;

	cout << "Dairenin çevresi : " << cevre << endl;
	cout << "Dairenin alanı: " << alan << endl;

	return 0; 
}

