//
//  main.cpp
//  lab1_2
//
//  Created by Андрей Ярема on 13.09.2024.
//

#include <iostream>
#include "Browsers.h"
#include "ComputerNetworks.h"
#include "TV.hpp"
#include "Smartphone.hpp"
#include "Laptop.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
   
    Browsers brows1("Хром", "1.0.0", "cross-platform");
    
    brows1.getLinkForInstall();
    brows1.getInfo();
    brows1.search("ютуб");
    
    
    ComputerNetworks device1 ("Сервер 4542", "192.168.23.23", "F0:98C:1C", "Dial-Up");
    
    device1.getInfo();
    device1.connect("192.93.2.2.2");
    device1.sendPacket("data.json", "192.222.222.222", "DATA");
    
    cout << endl;
    
    Smartphone phone1("Apple", "iPhone 14", "iOS");
    Smartphone phone2("Samsung", "Galaxy S23", "Android");

    phone1.makeCall("123-456-7890");
    phone2.takePhoto();
    phone1.installApp("Instagram");

    cout << endl;

    Laptop laptop1("Apple", "M2", "16GB");
    Laptop laptop2("Dell", "Intel i7", "32GB");

 
    laptop1.runProgram("Photoshop");
    laptop2.connectToWiFi("HomeNetwork");
    laptop1.chargeBattery();

    cout << endl;

    TV tv1("Samsung", "65\"", "4K", true);
    TV tv2("Sony", "50\"", "Full HD", false);

    tv1.changeChannel(5);
    tv2.adjustVolume(15);
    tv1.connectToInternet();
    tv2.connectToInternet();
    
    return 0;
}
