#pragma once
#include <iostream>
using namespace std;

enum Language {
    Rus,
    Engl
};

enum Type_of_conversion {
    Morze_To_Text,
    Text_To_Morze
};


class Convector_Morze {
private:
    
    string Rus_Dictionary[32][2] = { {"З", "--.."} ,{"Ы", "-.--"},{"Ь", "-..-"},
    {"В", ".--"}, { "Ж", "...-" }, { "У", "..-" }, { "Т", "-" },
    { "С", "..." }, { "Р", ".-." }, { "Щ", "--.-" }, { "П", ".--." }, { "О", "---" }, { "Н", "-." }, { "М", "--" },
    { "Л", ".-.." }, { "К", "-.-" }, { "Й", ".---" }, { "И", ".." }, { "Х", "...." }, { "Г", "--." }, { "Ф", "..-." },
    { "Е", "." }, { "Д", "-.." }, { "Ц", "-.-." }, { "Б", "-..." }, { "А", ".-" }, { "Ю", "..--" }, { "Ч", "---." },
    { "Ъ", "--.--" }, { "Э", "..-.." }, { "Я", ".-.-" }, { "Ш", "----" } };
    
    string Engl_Dictionary[26][2] = {
    { "A", ".-" }, { "B", "-..." }, { "C", "-.-." }, { "D", "-.." },
    { "E", "." }, { "F", "..-." }, { "G", "--." }, { "H", "...." },
    { "I", ".." }, { "J", ".---" }, { "K", "-.-" }, { "L", ".-.." },
    { "M", "--" }, { "N", "-." }, { "O", "---" }, { "P", ".--." },
    { "Q", "--.-" }, { "R", ".-." }, { "S", "..." }, { "T", "-" },
    { "U", "..-" }, { "V", "...-" }, { "W", ".--" }, { "X", "-..-" },
    { "Y", "-.--" }, { "Z", "--.." }
    };

    string _translation_string; //строка которую нужно перевести
    string _upd_sring;   //переведённая строка
    Language _language;
    Type_of_conversion _type_of_conversion;

    void String_Treatment();

    void Search_in_Dictionary(string word);
public:

    Convector_Morze() {
        _translation_string = nullptr;
        _language = Rus;
        _type_of_conversion = Morze_To_Text;
    }

    Convector_Morze(string str, int opred_language, int opred_conversion) {
        switch (opred_language)
        {
        case 1:
            _language = Rus;
            break;
        case 2:
            _language = Engl;
            break;

        default:
            std::cout << "Unccorrect value" << std::endl;
            break;
        }

        switch (opred_conversion)
        {
        case 1:
            _type_of_conversion = Morze_To_Text;
            break;
        case 2:
            _type_of_conversion = Text_To_Morze;
            break;

        default:
            std::cout << "Unccorrect value" << std::endl;
            break;
        }

        _translation_string = str;

    }

    void Conversion();

    string Get_Translate_string() {
        return _upd_sring;
    }

};