#ifndef TURNRIGHT_HPP
#define TURNRIGHT_HPP

#include "ICommand.hpp"
#include "IControlable.hpp"

class TurnRight : public ICommand {
private:
<<<<<<< Updated upstream
=======
    void rotate();
>>>>>>> Stashed changes
    IControlable* _cObj;

public:
    TurnRight(IControlable* cObj);

    void Execute() override;
<<<<<<< Updated upstream

    Commands GetEnum() override;

private:
    void Rotate();
=======
    Commands GetEnum() override;

>>>>>>> Stashed changes
};

#endif /* TURNRIGHT_HPP */
