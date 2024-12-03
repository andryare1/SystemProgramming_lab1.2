//
//  Browsers.cpp
//  lab1_2
//
//  Created by Андрей Ярема on 13.09.2024.
//

#include "Browsers.h"
#include <string>
#include <iostream>

using namespace std;

Browsers::Browsers(string _name, string _version, string _platform) : name (_name), version (_version), platform (_platform) {};

void Browsers:: getLinkForInstall() const {
    
    
    if (name == "Chrome" || name == "Хром") {
        cout <<  "https://www.google.com/intl/ru_ru/chrome"<< endl;
    }
        else if (name == "Edge" || name == "Эдж") {
            cout << "https://www.microsoft.com/ru-ru/edge/download"<< endl;
        }
        else if (name == "Opera" || name == "Опера") {
            cout <<  "https://www.opera.com/ru" << endl;
        }
        else {
            cout << "Такого браузера нет в нашей БД: " << name << endl;
        }
    }
    
void Browsers::getInfo() const {
    cout << "Браузер: " << name << "\nВерсия: " << version << "\nПлатформа: " << platform << endl;
}

void Browsers::search(string query) const {
    cout << "Выполняется поиск: " << "\"" << query<< "\"" << " в браузере " << name << endl;
}



