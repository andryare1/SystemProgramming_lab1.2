#ifndef LAPTOP_H
#define LAPTOP_H

#include <string>
using namespace std;

class Laptop {
public:
    string brand;
    string processor;
    string ram;

    Laptop(string _brand, string _processor, string _ram);

    void runProgram(string programName) const;
    void connectToWiFi(string network) const;
    void chargeBattery() const;
};

#endif // LAPTOP_H
