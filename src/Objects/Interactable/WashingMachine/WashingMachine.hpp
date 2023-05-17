#include <InteractableObject.hpp>

class WashingMachine : public IInteractable
{
private:
    string objectSymbol = "WM";
    int _x;
    int _y;
    bool _isSucked;
public:
    WashingMachine();
    void setPositionX(int x) override;
    void setPositionY(int y) override;
    void setPosition(int x, int y) override;
    pair<int, int> getPosition() override;
    void react() override;
    bool isSucked() override;
    string getObjectSymbol() override;
};