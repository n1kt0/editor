#pragma once
#ifndef OUTPUT_PIN_H
#define OUTPUT_PIN_H

#include "BasePin.h"

template<class T> class OutputPin : public BasePin
{
public:
	T* data;

	OutputPin(void);
	~OutputPin(void);

	void SetValue(T value);
};


#include "OutputPin.cpp"

#endif OUTPUT_PIN_H