//
//  Browsers.h
//  lab1_2
//
//  Created by Андрей Ярема on 13.09.2024.
//

#ifndef Browsers_h
#define Browsers_h
#include <string>

using namespace std;

class Browsers {
    string name;
    string version;
    string platform;
    
public:
    Browsers(string _name, string _version, string _platform);
    
    void getLinkForInstall() const;
    void getInfo() const;
    void search(string query) const;
};

#endif /* Browsers_h */
