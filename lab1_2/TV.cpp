#include "TV.hpp"
#include <iostream>

TV::TV(string _brand, string _screenSize, string _resolution, bool _isSmart)
    : brand(_brand), screenSize(_screenSize), resolution(_resolution), isSmart(_isSmart) {}

void TV::changeChannel(int channelNumber) const {
    cout << "Изменение на канал " << channelNumber << " на " << brand << " телевизоре" << endl;
}

void TV::adjustVolume(int level) const {
    cout << "Регулировка громоксти на " << level << "на " << brand << " телевизоре" << endl;
}

void TV::connectToInternet() const {
    if (isSmart) {
        cout << "Подключение " << brand << " телевизора к интернету" << endl;
    } else {
        cout << brand << " телевизор не является смарт-телевизором" << endl;
    }
}
