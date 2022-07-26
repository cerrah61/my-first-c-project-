#include <iostream>
using namespace std;
int main()
{
	cout << "int'in uzunluğu: " << sizeof(int) << " byte'tır" << endl;
	cout << "short int'in uzunluğu: " << sizeof(short int) << "byte'dır" << endl;
	cout << "long int'in uzunluğu: " << sizeof(long int) << "byte'dır" << endl;
	cout << "long long int'in uzunluğu: " << sizeof(long long int) << "byte'dır" << endl;
	cout << "char'in uzunluğu: " << sizeof(char) << "byte'dır" << endl;
	cout << "float'in uzunluğu: " << sizeof(float) << "byte'dır" << endl;
	cout << "double'in uzunluğu: " << sizeof(double) << "byte'dır" << endl;
	cout << "bool'in uzunluğu: " << sizeof(bool) << "byte'dır" << endl;
	cout << "unsigned int'in uzunluğu: " << sizeof(unsigned int) << "byte'dır" << endl;
	return 0;
}