#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d = 5;
	a = ++d; // önce d'nin değeri bir arttı sonra bu değer a'ya atandı
	b = d++; // önce d değeri b'ye atandı sonra d değeri bir arttı, hangisi önceyse o ilk uygulanır -atama ya da artırma,azaltma-
	c= d;
	cout << "a değeri: " << a << endl;
	cout << "b değeri: " << b << endl;
	cout << "c değeri: " << c << endl;
	cout << "d değeri: " << d << endl;
	return 0;
}