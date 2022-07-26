#include <iostream>
using namespace std;
int main()
{
	int sayı = 9;
	float a, b, c;
	a = (float) sayı / 4;
	b = sayı / 4.0;
	c = (float)sayı / 4;
	cout << "a değeri:" << a << endl;
	cout << "b değeri:" << b << endl;
	cout << "c değeri:" << c << endl;
	return 0;
}