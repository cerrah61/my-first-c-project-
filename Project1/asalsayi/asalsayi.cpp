#include <iostream>
using namespace std;
int main()
{
	int x;
	int i;
	int sayac = 0;
	cout << "bir sayi giriniz: ";
	cin >> x;
	for (i = 1; i <= x; i++) {
		if (x % i == 0)
			sayac++;
	}
	if (sayac == 2) {
		cout << "sayi asal sayidir.";
	}
	else {
		cout << "sayi asal degildir";
	}
	return 0;

}