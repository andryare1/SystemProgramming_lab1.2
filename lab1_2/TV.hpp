#ifndef TV_H
#define TV_H

#include <string>
using namespace std;

class TV {
public:
    string brand;
    string screenSize;
    string resolution;
    bool isSmart;

    TV(string _brand, string _screenSize, string _resolution, bool _isSmart);

    void changeChannel(int channelNumber) const;
    void adjustVolume(int level) const;
    void connectToInternet() const;
};

#endif // TV_H
