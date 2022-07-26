#include <iostream>
using namespace std;
int main()
{
	int sifre;
	int hak = 3;
	cout << "Sifreyi giriniz:";
	cin >> sifre;
	if (sifre == 6161) {
		cout << "Hos geldiniz.";
	}
	else {
		cout << "hatali giris. iki hakkiniz kaldi.";
		hak--;
		cout << "Sifreyi giriniz:";
		cin >> sifre;
		if (sifre == 6161) {
			cout << "Hos geldiniz.";
		}
		else {
			cout << "hatali giris. bir hakkiniz kaldi.";
			hak--;
			if (sifre == 6161) {
				cout << "Hos geldiniz.";
			}
			cout << "Sifreyi giriniz:";
			cin >> sifre;
			if (sifre == 6161) {
				cout << "Hos geldiniz.";
			}
			else {
				cout << "hatali giris. hakkiniz bitti.";
				hak--;
			}
		}
		return 0;
	}
}


