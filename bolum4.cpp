//�RNEK 2 -> DA�REN�N ALANI VE �EVRES�N� HESAPLAYAN PROGRAM
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");
	float daireninyari�api;
	float cevre;
	float alan;
	cout << "Dairenin yari �apini giriniz: ";
	cin >> daireninyari�api;

	cevre = 2 * 3.14 * daireninyari�api;
	alan = 3.14 * daireninyari�api * daireninyari�api;

	cout << "Dairenin �evresi : " << cevre << endl;
	cout << "Dairenin alan�: " << alan << endl;

	return 0; 
}

