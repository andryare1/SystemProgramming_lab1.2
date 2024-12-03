#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <string>
using namespace std;

class Smartphone {
public:
    string brand;
    string model;
    string os;

    Smartphone(string _brand, string _model, string _os);

    void makeCall(string number) const;
    void takePhoto() const;
    void installApp(string appName) const;
};

#endif // SMARTPHONE_H
