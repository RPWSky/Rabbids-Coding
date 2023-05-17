#include <iostream>
using namespace std;


    WashingMachine()
    {
        _x = 0;
        _y = 0;
        _isSucked = false;
    }
    void setPositionX(int x)
    {
        _x = x;
    }
    void setPositionY(int y)
    {
        _y = y;
    }
    void setPosition(int x, int y)
    {
        _x = x;
        _y = y;
    }
    pair<int, int> getPosition()
    {
        return make_pair(_x, _y);
    }
    void react()
    {
        cout << "WashingMachine activated!" << endl;
    }
    bool isSucked()
    {
        return _isSucked;
    }
    string getObjectSymbol()
    {
        return objectSymbol;
    }