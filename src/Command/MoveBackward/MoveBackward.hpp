<<<<<<< Updated upstream
#include "ICommand.hpp"
=======
#pragma once
#include "ICommand.hpp"
#include "ControllableObject.hpp"
>>>>>>> Stashed changes

class MoveBackward : public ICommand
{
private:
<<<<<<< Updated upstream
    IControlable *_cObj;
    void MoveByDirection;

public:
    MoveBackward(IControlable *cObj);
    void Execute();
    Commands GetEnum();
=======
    ControllableObject *_cObj;
    void moveByDirection();

public:
    MoveBackward(ControllableObject *cObj);
    void execute();
    Commands getEnum();
>>>>>>> Stashed changes
};