#include "MoveForward.hpp"

MoveForward::MoveForward(IControlable* cObj) {
    _cObj = cObj;
}

void MoveForward::execute() override {
    moveByDirection();
}

Commands MoveForward::getEnum() override {
    return Commands::Forward;
}

void MoveForward::moveByDirection() {
    switch (_cObj->GetDirection()) {
    case Directions::Up:
<<<<<<< Updated upstream
         _cObj->SetPositionY(_cObj->GetPosition().y - 1);
        break;
    case Directions::Down:
        _cObj->SetPositionY(_cObj->GetPosition().y + 1);
        break;
    case Directions::Left:
        _cObj->SetPositionX(_cObj->GetPosition().x - 1);
        break;
    case Directions::Right:
        _cObj->SetPositionX(_cObj->GetPosition().x + 1);
=======
         _cObj->setPositionY(_cObj->getPosition().y - 1);
        break;
    case Directions::Down:
        _cObj->setPositionY(_cObj->getPosition().y + 1);
        break;
    case Directions::Left:
        _cObj->setPositionX(_cObj->getPosition().x - 1);
        break;
    case Directions::Right:
        _cObj->setPositionX(_cObj->getPosition().x + 1);
>>>>>>> Stashed changes
        break;
    default:
        break;
    }
}