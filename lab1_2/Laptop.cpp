
#include "Laptop.hpp"
#include <iostream>

Laptop::Laptop(string _brand, string _processor, string _ram)
    : brand(_brand), processor(_processor), ram(_ram) {}

void Laptop::runProgram(string programName) const {
    cout << "Запуск " << programName << " на " << brand << " ноутбуке" << endl;
}

void Laptop::connectToWiFi(string network) const {
    cout << "Подключение к WiFi: " << network << " на " << brand << " ноутбуке" << endl;
}

void Laptop::chargeBattery() const {
    cout << "Зарядка " << brand << " ноутбука" << endl;
}
