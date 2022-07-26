#include <iostream>
using namespace std;
int main()
{
	int avrge;
	cout << "Type your prep class average: ";
	cin >> avrge;
	if (avrge > 85)
	{
		cout << "You passed with AA.";
	}
	else if (avrge > 65) {
		cout << "You passed with BB. ";
	}
	else {
		cout << "You didn't pass the exam.";
	}
	return 0;
}