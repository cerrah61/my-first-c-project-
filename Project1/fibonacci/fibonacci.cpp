#include <iostream>
using namespace std;
int main()
{
	int a = 1, b = 1, c, n, i;
	cout << "bir deger giriniz: ";
	cin >> n;
	if (n > 0 && n!=1) {
		cout << a << endl << b << endl;
		for (i = 0; i <n - 2; i++) {
			c = a + b;
			a = b;
			b = c;
			cout << c << endl;
		}
	}
	else if (n == 1) {
		cout << 1 << endl;
	}


	return 0;
}