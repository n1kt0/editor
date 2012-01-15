#pragma once
#include "BType.h"
class Number : public BType
{
	double data;

public:
	Number()
	{
		data = 0;
	}

	Number& operator=(double value)
	{
		data = value;
		return *this;
	}

	Number& operator+(Number num)
	{
		data += num.data;
		return *this;
	}
};