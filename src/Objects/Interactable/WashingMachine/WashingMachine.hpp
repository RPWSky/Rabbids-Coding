<<<<<<< Updated upstream
#pragma once
#include "InteractableObject.hpp"

class WashingMachine : public InteractableObject
=======
#include <InteractableObject.hpp>

class WashingMachine : public IInteractable
>>>>>>> Stashed changes
{
private:
    string objectSymbol = "WM";
    int _x;
    int _y;
    bool _isSucked;
public:
<<<<<<< Updated upstream
    virtual void React() override;
=======
    WashingMachine();
    void setPositionX(int x) override;
    void setPositionY(int y) override;
    void setPosition(int x, int y) override;
    pair<int, int> getPosition() override;
    void react() override;
    bool IsSucked() override;
    string getObjectSymbol() override;
>>>>>>> Stashed changes
};