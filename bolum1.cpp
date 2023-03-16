#include <iostream> 
#include <locale.h> // Türkçe karakter kullanabilmek için kütüphane
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "Hello World" << endl; 
	
	int tamSayi;
	float kesirliSayi1;
	double kesirliSayi2;
	bool anahtar;
	char karakter1;

	tamSayi = 5;
	kesirliSayi1 = 10.85;
	kesirliSayi2 = 20.5;
	anahtar = true; /* True 1 , false 0'dýr.*/
	karakter1 = 'K';

	cout << "Tam sayiniz: " << tamSayi << endl;
	cout << "Kesirli Sayiniz: " << kesirliSayi1 << endl;
	cout << "Kesirli Sayiniz: " << kesirliSayi2 << endl;
	cout << "Bool karakteriniz: " << anahtar << endl;
	cout << "Char Karkteriniz: " << karakter1 << endl;

	return 0; 
}
