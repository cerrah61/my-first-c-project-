#include <iostream>

#define studentPerClass 16 // her sınıftaki kişi sayısı değişirse buradan değiştiriilir
// "const int studentsPerClass=16" bu kullanım da doğrudur 
int main()
{
	int students, classes=24 ;
	students = classes * studentPerClass;
	return 0;
}