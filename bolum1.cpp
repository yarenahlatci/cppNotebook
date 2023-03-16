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
	anahtar = true; /* True 1 , false 0'dır.*/
	karakter1 = 'K';

	cout << "Tam sayiniz: " << tamSayi << endl;
	cout << "Kesirli Sayiniz: " << kesirliSayi1 << endl;
	cout << "Kesirli Sayiniz: " << kesirliSayi2 << endl;
	cout << "Bool karakteriniz: " << anahtar << endl;
	cout << "Char Karkteriniz: " << karakter1 << endl;

	return 0; 
}

/*
Kodlarımıza giriş yaparken #include <iostream> komutu altında kütüphanemizi çağırmış olduk.
Bu kütüphanemiz sayesinde programın standart girdi ve çıktı bilgilerini içerebilmesini sağlar.
Cout sayesinde ekrana bir çıktı verdirebilir ve Cin sayesinde kullanıcıdan bir girdi alabiliriz.
\n ifadesini veya endl ifadesi ile alt satıra geçebiliriz.
İnt tam sayıları tutar,float ve double kesirli sayıları tutar,bool true veya false,char karakterleri tutar.
Ram'de saklandıkları yerler;
İnt 4 byte
Double 8 byte
Char 1 byte
Float 4 byte

*/
