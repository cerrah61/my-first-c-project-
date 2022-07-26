#include <iostream>
using namespace std;
int main()
{
	int x = 75, y = 84;
	++x;
	y--;
	int sayi1, sayi2, sayi3, sayi4, carpim, toplam;
	cout << "Birinci sayıyı giriniz:";
	cin >> sayi1;
	cout << "İkinci sayıyı giriniz:";
	cin >> sayi2;
	cout << "Üçüncü sayıyı giriniz:";
	cin >> sayi3;
	cout << "Dördüncü sayıyı giriniz:";
	cin >> sayi4;
	carpim = sayi1 * sayi3;
	toplam = sayi2 + sayi4;
	cout << "Sonuç:" << carpim - toplam << endl;
	cout << x << endl;
	cout << y << endl;
	
	return 0;
}