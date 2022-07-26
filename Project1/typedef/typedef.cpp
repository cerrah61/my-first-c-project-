#include <iostream>
using namespace std;
typedef unsigned short int USHORT; //unsigned short int değişkenine USHORT takma adını koyduk
int main()
{
	USHORT width = 10;
	USHORT length = 5;
	USHORT area = width * length;
	cout << "Area:" << area;
	return 0;
}
