#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int matris[4][2];
	cout << "Mattis degerlerini giriniz: ";
	for (i = 0; i < 4; i++) 
	{
		for (j = 0; j < 2; j++)
		{
			cin >> matris[i][j];
		}
	}
	cout << "Matris: ";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << matris[i][j];
		}
		cout << endl;
	}
	return 0;
}