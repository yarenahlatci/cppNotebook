#include <iostream> 
#include <locale.h> // T�rk�e karakter kullanabilmek i�in k�t�phane
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
	anahtar = true; /* True 1 , false 0'd�r.*/
	karakter1 = 'K';

	cout << "Tam sayiniz: " << tamSayi << endl;
	cout << "Kesirli Sayiniz: " << kesirliSayi1 << endl;
	cout << "Kesirli Sayiniz: " << kesirliSayi2 << endl;
	cout << "Bool karakteriniz: " << anahtar << endl;
	cout << "Char Karkteriniz: " << karakter1 << endl;

	return 0; 
}

/*
Kodlar�m�za giri� yaparken #include <iostream> komutu alt�nda k�t�phanemizi �a��rm�� olduk.
Bu k�t�phanemiz sayesinde program�n standart girdi ve ��kt� bilgilerini i�erebilmesini sa�lar.
Cout sayesinde ekrana bir ��kt� verdirebilir ve Cin sayesinde kullan�c�dan bir girdi alabiliriz.
\n ifadesini veya endl ifadesi ile alt sat�ra ge�ebiliriz.
�nt tam say�lar� tutar,float ve double kesirli say�lar� tutar,bool true veya false,char karakterleri tutar.
Ram'de sakland�klar� yerler;
�nt 4 byte
Double 8 byte
Char 1 byte
Float 4 byte

*/
