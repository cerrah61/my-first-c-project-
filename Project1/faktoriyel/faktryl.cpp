#include <iostream>
using namespace std;
int main()
{
	int i;
	int sonuc = 1;
	int x;
	cout << "Faktoriyelini bulmak istediginiz sayi:";
	cin >> x;
	for (i = 1; i <= x; i++) {
		sonuc = sonuc * i;
	}
	cout << "Sayinin faktoriyeli:" << sonuc;
	return 0;
}