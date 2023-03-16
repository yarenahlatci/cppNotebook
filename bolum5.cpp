// ÖRNEK 3 -> KÜPÜN YANAL ALANLARININ TOPLAMINI VE HACMÝNÝ HESAPLAYAN PROGRAM
#include <iostream> 
#include <locale.h>
using namespace std; 
int main() {
	setlocale(LC_ALL, "Turkish");
	float kupunBirKenari;
	float kupunYanalALanlarininToplami;
	float kupunHacmi;
	cout << "Lütfen küpün bir kenarýný giriniz: " << endl;
	cin >> kupunBirKenari;
	kupunYanalALanlarininToplami = 6 * kupunBirKenari * kupunBirKenari;
	kupunHacmi = kupunBirKenari * kupunBirKenari * kupunBirKenari;
	cout << "Küpün yanal alanlarýnýn toplamý: " << kupunYanalALanlarininToplami << endl;
	cout << "Küpün hacmi: " << kupunHacmi;
	return 0; 
}

