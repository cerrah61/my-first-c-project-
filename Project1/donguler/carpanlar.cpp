#include <iostream>
using namespace std;
int main() {
	int x;
	int i;
	cout << "Carpanlarina ayirmak istediginiz sayiyi giriniz: ";
	cin >> x;
	if (x != 0 && x > 0) {
		for (i = 1; i <= x; i++) {
			if (x% i == 0) {
				cout << i << endl;
			}
		}
	}
	else {
		cout << "sayi gecersiz.";
	}
	return 0;
	
}





