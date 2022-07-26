#include <iostream>
using namespace std;
int main()
{
	string ad, soyad, sonuc;
	int yas;
	cout << "Adınız: ";
	cin >> ad;
	cout << "Soyadınız: ";
	cin >> soyad;
	cout << "Yaşınız: ";
	cin >> yas;
	sonuc = (yas > 18) ? "Oy kullanabilirsiniz." : "Yaşınız tutmuyor.";
	cout << "Sonuç: " << sonuc << endl;
	return 0;
}