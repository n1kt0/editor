#pragma once
#include "BaseType.h"

class Numeric : public BaseType
{
	double* data;
public:
	Numeric(void);
	Numeric(double);
	~Numeric(void);

	Numeric operator=(double value);

	double Numeric::GetValue();
};

