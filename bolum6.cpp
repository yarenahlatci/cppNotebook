// �RNEK 4 -> B�R�NC� DERECEDEN VE �K�NC� DERECEDEN DENKLEM ��ZEN PROGRAM

#include <iostream> 
#include <locale.h>
using namespace std; 

int main() {
	setlocale(LC_ALL, "Turkish");

	float a, b, c, x;
	cout << "L�tfen a de�erini giriniz: ";
	cin >> a;
	cout << "L�tfen b de�erini giriniz: ";
	cin >> b;
	cout << "L�tfen c de�erini giriniz: ";
	cin >> c;
	cout << "L�tfen x de�erini giriniz: ";
	cin >> x;

	cout <<"Birinci dereceden denklem ��z�m�: "<< a * x + b << endl;
	cout <<"�kinci dereceden denklem ��z�m�: "<< a * x * +b * x + c;
}

