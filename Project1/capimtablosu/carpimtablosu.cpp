#include <iostream>
using namespace std;
int main()
{
	int i,j, boyut;
	cout << "boyutu giriniz: " ;
	cin >> boyut;
	for (i = 1; i <= boyut; i++) {
		for (j = 1; j <= boyut; j++) {
			cout << i * j<<" , ";
		}
		cout << endl;
	}
	return 0;
}