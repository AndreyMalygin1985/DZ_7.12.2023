#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

// Написать функцию, принимающую в качестве параметров две строки 
// и возвращающую копию первого параметра, все вхождения второго
// параметра в которой взяты в «()».

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string s1 = "abaracadabra";
	string s2 = "ab";
	string s;
	int i;
	while ((i = s1.find(s2)) >= 0)
	{
		s += s1.substr(0, i) + "(" + s2 + ")";
		s1 = s1.substr(i + s2.length());
	}
	s += s1;
	cout << s << endl;

	//-------------------------------------------------------------------
	/*string s1;
	string s2;
	string s;
	cout << "Введите текст" << endl;
	getline(cin, s1);
	cout << "Введите вхождения, которые возьмём в ( )" << endl;
	getline(cin, s2);

	int i{};
	while ((i = s1.find(s2)) >= 0)
	{
		s += s1.substr(0, i) + "(" + s2 + ")";
		s1 = s1.substr(i + s2.length());
	}
	s += s1;
	cout << s << endl;*/

	return 0;
}