#include <iostream>
using namespace std;
int main()
{
	int islem, x, y;
	cout << "Birinci sayiyi giriniz: " << endl;
	cin >> x;
	cout << "İkinci sayiyi giriniz: ";
	cin >> y;
	cout << "Bir islem seciniz: " << endl;
	cout << "1 Toplama " << endl;
	cout << "2 Cikarma " << endl;
	cout << "3 Carpma " << endl;
	cout << "4 Bolme " << endl;
	cin >> islem;
	switch (islem) {
	case 1: cout << "Sayilarin toplami: " << x + y << endl;
		break;
	case 2: cout << "Sayilarin farki: " << x - y << endl;
		break;
	case 3: cout << "Sayilarin carpimi: " << x * y << endl;
		break;
	case 4: cout << "Sayiların bolumu: " << x / y << endl;
		break;
	default: cout << "Hatali giris." << endl;
	}
	return 0;
}