#include <iostream>
#include "Convector_Morze_To_Text.h"



void Convector_Morze::Conversion() {
	String_Treatment();
}

void Convector_Morze::String_Treatment() {
	int i = 0;
	string letter;

	while (_translation_string[i]) {
		letter.clear();
		while (_translation_string[i] != ' ' && _translation_string[i] != '\0')
		{
			letter.push_back(_translation_string[i]);
			i++;
		}
		Search_in_Dictionary(letter);
		if (_translation_string[i] == ' ') {	
			i++;
		}
		
	}

}

void Convector_Morze::Search_in_Dictionary(string word) {
	int num;
	int dop_num;
	if (_type_of_conversion == Morze_To_Text) {
		num = 1;
		dop_num = 0;
	}
	else {
		num = 0;
		dop_num = 1;
	}

	switch (_language) {
	case Rus:
		for (int i = 0; i < 32; i++) {
			if (Rus_Dictionary[i][num] == word) {
				_upd_sring.append(Rus_Dictionary[i][dop_num]);
				_upd_sring += " ";
				break;
			}
			if (Rus_Dictionary[i][num] != word && i ==31) {
				cout << "This word not exist in dictionary" << std::endl;
			}
		}
		
		break;

	case Engl:
		for (int i = 0; i < 26; i++) {
			if (Engl_Dictionary[i][num] == word) {
				_upd_sring.append(Engl_Dictionary[i][dop_num]);
				_upd_sring += " ";
				break;
			}
			if (Rus_Dictionary[i][num] != word && i == 25) {
				cout << "This word not exist in dictionary" << std::endl;
			}
		}
		
		break;
		

	default:
		break;
	}
}

