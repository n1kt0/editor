#pragma once

#include "..\DataTypes\Numeric.h"
#include "..\Pins\OutputPin.h"

class ConstantNode
{
	//Numeric* data;

public:
	OutputPin<Numeric>* outPin;

	ConstantNode(void);
	~ConstantNode(void);

	void SetValue(double value);
};
