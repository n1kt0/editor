#pragma once
#include "BaseNode.h"
#include "..\DataTypes\Numeric.h"
#include "..\Pins\InputPin.h"
#include "..\Pins\OutputPin.h"

class AdderNode : public BaseNode
{
public:
	InputPin<Numeric>* aPin;
	InputPin<Numeric>* bPin;

	OutputPin<Numeric>* resultPin;

	AdderNode(void);
	~AdderNode(void);

	void Process();
};

