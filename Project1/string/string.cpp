#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x = 50;
	int y = 40;
	int z = x + y;
	string a = "50";
	string b = "40";
	string c = a + b;
	string text = "Karnibahar";
	string fullName;
	cout << "Text your full name: ";
	getline(cin, fullName); // string kullanırken birden çok kelime girilceği zaman bu satır kullanılır eğer bu satır yoksa sadece ilk kelime ekranda gözükür
	cout << "Your name is: " << fullName << endl;
	text[4] = 'a';// textteki bir karakteri değiştirir
	cout << text<<endl;
	cout << "The length of the txt is: " << text.length()<<endl; // length or size kullanılabilir, karakter sayısı
	cout <<"İlk karakter: "<< text[0] << endl; // ilk karakter sıfırdır her zaman 
	cout <<"İkinci karakter: "<< text[1] << endl;
	cout << "sonuç: " << z << endl; //numbers are added
	cout << "sonuç2: " << c << endl; // strings are contenated
	return 0;

}