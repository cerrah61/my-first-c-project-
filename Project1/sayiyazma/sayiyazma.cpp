// klavyeden girilen sayıyı yazıyla yazan program yapınız.
#include <iostream>
using namespace std;
int main()
{
	int sayi;
	cout << "1 ile 999 arasında bir sayi giriniz: ";
	cin >> sayi;
	if (sayi >= 1 && sayi <= 999) {
		switch (sayi / 100) {
		case 0: cout << "";
			break;
		case 1: cout << "yuz";
			break;
		case 2: cout << "ikiyuz";
			break;
		case 3:cout << "ücyuz";
		 break;
		case 4: cout << "dortyuz";
			break;
		case 5: cout << "besyuz";
			break;
		case 6: cout << "altiyuz";
			break;
		case 7: cout << "yediyuz";
			break;
		case 8: cout << "sekizyuz";
			break;
		case 9: cout << "dokuzyuz";
			break;
		}

		switch ((sayi % 100) / 10) {
		case 0: cout << "";
			break;
		case 1: cout << "on";
			break;
		case 2: cout << "yirmi";
			break;
		case 3: cout << "otuz";
			break;
		case 4: cout << "kirk";
			break;
		case 5: cout << "elli";
			break;
		case 6: cout << "altmis";
			break;
		case 7: cout << "yetmis";
			break;
		case 8: cout << "seksen";
			break;
		case 9: cout << "doksan";
			break;
		
		}
		switch ((sayi % 100) % 10) {
		case 0: cout << "";
			break;
		case 1: cout << "bir";
			break;
		case 2: cout << "iki";
			break;
		case 3: cout << "uc";
			break;
		case 4: cout << "dort";
			break;
		case 5: cout << "bes";
			break;
		case 6: cout << "alti";
			break;
		case 7: cout << "yedi";
			break;
		case 8: cout << "sekiz";
			break;
		case 9: cout << "dokuz";
			break;

		}


	}
	return 0;
}