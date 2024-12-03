#include "Smartphone.hpp"
#include <iostream>

Smartphone::Smartphone(string _brand, string _model, string _os)
    : brand(_brand), model(_model), os(_os) {}

void Smartphone::makeCall(string number) const {
    cout << "Звоним " << number << " с " << brand << " " << model << endl;
}

void Smartphone::takePhoto() const {
    cout << "Делаем фото с " << brand << " " << model << endl;
}

void Smartphone::installApp(string appName) const {
    cout << "Скачиваем " << appName << " на " << brand << " " << model << endl;
}
