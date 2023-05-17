#pragma once
#include "../Objects.hpp"
#include "../Interactable/InteractableObject.hpp"
<<<<<<< Updated upstream
=======
#include "../ControllableObject/ControllableObject.hpp"

>>>>>>> Stashed changes
using namespace std;

class ObjectFactory
{
public:
<<<<<<< Updated upstream
	static InteractableObject *CreateObject(string ObjectName);
};
=======
	static Objects *CreateObject(string ObjectName);
	static InteractableObject *Create_IO(string ObjectName);
	static ControllableObject *Create_CO(string ObjectName);
};
>>>>>>> Stashed changes
