//�rnek 1
#include <iostream> 
using namespace std; 
int main() {
	string isim;
	int yas;
	string bolum;
	cout << "Lutfen adinizi girin: " << endl;
	cin >> isim;
	cout << "Lutfen yasinizi girin: " << endl;
	cin >> yas;
	cout << "Lutfen bolumunuzu girin: " << endl;
	cin >> bolum;
	cout << "Kullanicinin ismi: " << isim << endl;
	cout << "Kullanicinin yasi: " << yas << endl;
	cout << "Kullanicinin okudugu bolum: " << bolum << endl;

	return 0; 
}
// ---------------------------------------------------------------------------
//�rnek 2 
#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");
	float sayi1;
	float sayi2;
	float toplam;
    float c�kar;
	float bol;
	float carp; 


	cout << "L�tfen iki sayi giriniz: " << endl;
	cout << "Birinci sayi: ";
	cin >> sayi1;
	cout << "�kinci sayi: ";
	cin >> sayi2;
	
	toplam = sayi1 + sayi2;
	c�kar = sayi1 - sayi2;
	carp = sayi1 * sayi2;
	bol = sayi1 / sayi2;


	cout << "Say�lar�n toplamlar�: "<<toplam << endl;
	cout << "Say�lar�n c�karmas�: " << c�kar << endl;
	cout << "Say�lar�n carp�m�: " << carp <<endl;
	cout << "Say�lar�n b�l�m�: " << bol << endl;


	return 0; 
}
