#include "MoveBackward.hpp"
<<<<<<< Updated upstream

MoveBackward(IControlable *cObj)
=======
#include "ControllableObject.hpp"
#include <iostream>

MoveBackward::MoveBackward(ControllableObject *cObj)
>>>>>>> Stashed changes
{
    _cObj = cObj;
}

<<<<<<< Updated upstream
void Execute()
{
    MoveByDirection();
}

Commands GetEnum()
=======
void MoveBackward::execute()
{
    moveByDirection();
}

Commands MoveBackward::getEnum()
>>>>>>> Stashed changes
{
    return Commands::Backward;
}

<<<<<<< Updated upstream
void MoveByDirection()
=======
void MoveBackward::moveByDirection()
>>>>>>> Stashed changes
{
    switch (_cObj->GetDirection())
    {
    case Directions::Up:
<<<<<<< Updated upstream
        _cObj->SetPositionY(_cObj->GetPosition().y + 1);
        break;
    case Directions::Down:
        _cObj->SetPositionY(_cObj->GetPosition().y - 1);
        break;
    case Directions::Left:
        _cObj->SetPositionX(_cObj->GetPosition().x + 1);
        break;
    case Directions::Right:
        _cObj->SetPositionX(_cObj->GetPosition().x - 1);
=======
        _cObj->setPositionY(_cObj->getPosition().y + 1);
        break;
    case Directions::Down:
        _cObj->setPositionY(_cObj->getPosition().y - 1);
        break;
    case Directions::Left:
        _cObj->setPositionX(_cObj->getPosition().x + 1);
        break;
    case Directions::Right:
        _cObj->setPositionX(_cObj->getPosition().x - 1);
>>>>>>> Stashed changes
        break;
    default:
        break;
    }
}