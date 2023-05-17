#include <iostream>
<<<<<<< Updated upstream
class Command {
=======

class ICommand
{
>>>>>>> Stashed changes
public:
    virtual Commands getEnum() = 0;
    virtual void execute() = 0;
};