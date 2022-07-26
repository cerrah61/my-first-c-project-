#include <iostream>
using namespace std;
int main()
{
	char karakter;
	cout << "herhangi bir tusa basiniz: ";
	cin >> karakter;
	if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z')) {
		cout << " girilen karakter harftir.";
	}
	else if (karakter >= '0' && karakter <= '9') {
		cout << "girilen karakter sayidir. ";
	}
	else {
		cout << "girilen karakter ozel karakterdir.";
	}
	return 0;
}