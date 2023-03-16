// ÖRNEK 1 -> KARENÝN ALANI VE ÇEVRESÝNÝ HESAPLAYAN PROGRAM
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");
	float kareninBirKenari;
	cout << "Lütfen karenin bir kenarýný girin: " << endl;
	cin >> kareninBirKenari;
	cout << "Karenin çevresi " << 4 * kareninBirKenari << "  Karenin alaný : " << kareninBirKenari * kareninBirKenari;
	return 0; 
}


