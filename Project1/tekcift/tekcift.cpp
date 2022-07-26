#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "bir sayı: ";
	cin >> x;
	cout << "ikinci sayı: ";
	cin >> y;
	if (x % 2 == 0 && y % 2 == 0) {
		cout << "ikisi de çift." << endl;
	}
	if (x % 2 == 1 && y % 2 == 1) {
		cout << "ikisi de tek." << endl;
	}
	if ((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0)) {
		cout << "farklı sonuç. " << endl;
	}
	return 0;
}