//
//  ComputerNetworks.cpp
//  lab1_2
//
//  Created by Андрей Ярема on 20.09.2024.
//

#include "ComputerNetworks.h"
#include <iostream>
#include <string>

using namespace std;


ComputerNetworks::ComputerNetworks(string _deviceType, string _IP_address, string _MAC_address, string _connectionType) : deviceType (_deviceType), IP_address(_IP_address), MAC_address(_MAC_address), connectionType(_connectionType) {};

void ComputerNetworks:: getInfo() const {
    
    cout << "" << endl;
}

void ComputerNetworks::connect(string IP) {
    
    cout << "Подключено к IP аддресу: " << IP << endl;
}

void ComputerNetworks::sendPacket(string packetData, string destIP, string packetType) {
    std::cout << "Отправка пакета: " << packetData << " по адресу  " << destIP << " с типом " << packetType << std::endl;
}




