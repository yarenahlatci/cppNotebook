// �RNEK 1 -> KAREN�N ALANI VE �EVRES�N� HESAPLAYAN PROGRAM
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");
	float kareninBirKenari;
	cout << "L�tfen karenin bir kenar�n� girin: " << endl;
	cin >> kareninBirKenari;
	cout << "Karenin �evresi " << 4 * kareninBirKenari << "  Karenin alan� : " << kareninBirKenari * kareninBirKenari;
	return 0; 
}


