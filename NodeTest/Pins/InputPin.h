#pragma once
#ifndef INPUT_PIN_H
#define INPUT_PIN_H

#include "BasePin.h"

template<class T> class InputPin : public BasePin
{
public:
	T* data;

	InputPin(void);
	~InputPin(void);

	T* GetValue()
	{
		return data;
	}

	/*T* operator=(Numeric const& rhs)
	{
		return this.data;
	}*/
};


#include "InputPin.cpp"

#endif INPUT_PIN_H