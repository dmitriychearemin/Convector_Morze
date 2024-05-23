#include <iostream>
#include <string>
#include "Convector_Morze_To_Text.h"
#include <fcntl.h>
#include<codecvt>
#include <locale>
using namespace std;

void ClearConsole() {
	std::cout << "Нажмите любую клавишу для очистки экрана..." << std::endl;
	// Ожидаем нажатия клавиши
	getchar();

	// Очищаем консоль
	system("cls");
}

void main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	string str;
	int opredelitel_type_conversion, opredelitel_language_conversion;
	
	//string str = {"А П В" };
	/*getline(cin,str);
	Convector_Morze convector = Convector_Morze(str, 1, 2);
	convector.Conversion();
	cout << "Your String: " << str << endl;
	cout << "New converted String: " << convector.Get_Translate_string() << endl;*/

	while (true)
	{
		cout << "1 - Convert Morze to text" << endl;
		cout << "2 - Convert Text to morze" << endl;
		cin >> opredelitel_type_conversion;

		cout << "1 - Language Russian" << endl;
		cout << "2 - Language English" << endl;
		cin >> opredelitel_language_conversion;

		cin.clear();
		cin.ignore();
		cout << "Input string sharing space letters, exercize: --. ----; D G T Y E" << endl;
		getline(cin,str);

		Convector_Morze convector = Convector_Morze(str, opredelitel_language_conversion, opredelitel_type_conversion);
		convector.Conversion();
		cout << "Your String: " << str << endl;

		cout << "New converted String: "<< convector.Get_Translate_string() << endl;

		ClearConsole();
	}


}



