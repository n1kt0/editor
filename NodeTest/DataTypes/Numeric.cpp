#include "Numeric.h"

Numeric::Numeric(void)
{
	data = new double;
	*data = 0.0;
}

Numeric::Numeric(double value)
{
	data = new double;
	*data = value;
}

Numeric::~Numeric(void)
{
}

double Numeric::GetValue()
{
	return *data;
}

//Numeric Numeric::operator=(double value)
//{
//	Numeric num;
//	*num.data = value;
//	return num;
//}

Numeric Numeric::operator=(double value)
{
	*data = value;
	return *this;
}