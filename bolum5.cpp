// �RNEK 3 -> K�P�N YANAL ALANLARININ TOPLAMINI VE HACM�N� HESAPLAYAN PROGRAM
#include <iostream> 
#include <locale.h>
using namespace std; 
int main() {
	setlocale(LC_ALL, "Turkish");
	float kupunBirKenari;
	float kupunYanalALanlarininToplami;
	float kupunHacmi;
	cout << "L�tfen k�p�n bir kenar�n� giriniz: " << endl;
	cin >> kupunBirKenari;
	kupunYanalALanlarininToplami = 6 * kupunBirKenari * kupunBirKenari;
	kupunHacmi = kupunBirKenari * kupunBirKenari * kupunBirKenari;
	cout << "K�p�n yanal alanlar�n�n toplam�: " << kupunYanalALanlarininToplami << endl;
	cout << "K�p�n hacmi: " << kupunHacmi;
	return 0; 
}

