// ÖRNEK 4 -> BÝRÝNCÝ DERECEDEN VE ÝKÝNCÝ DERECEDEN DENKLEM ÇÖZEN PROGRAM

#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");

	float a, b, c, x;
	cout << "Lütfen a deðerini giriniz: ";
	cin >> a;
	cout << "Lütfen b deðerini giriniz: ";
	cin >> b;
	cout << "Lütfen c deðerini giriniz: ";
	cin >> c;
	cout << "Lütfen x deðerini giriniz: ";
	cin >> x;

	cout <<"Birinci dereceden denklem çözümü: "<< a * x + b << endl;
	cout <<"Ýkinci dereceden denklem çözümü: "<< a * x * +b * x + c;
}

