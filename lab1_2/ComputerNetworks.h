//
//  ComputerNetworks.h
//  lab1_2
//
//  Created by Андрей Ярема on 20.09.2024.
//

#ifndef ComputerNetworks_h
#define ComputerNetworks_h

#include <string>
#include "Laptop.hpp"

using namespace std;

class ComputerNetworks{
    
    string deviceType;
    string IP_address;
    string MAC_address;
    string connectionType;
    
public:
    ComputerNetworks(string _deviceType, string _IP_address, string _MAC_address, string _connectionType);
    
    
    void getInfo() const;
    void connect(string IP);
    void sendPacket(string packetData, string destIP, string packetType);
 };

#endif /* ComputerNetworks_h */
