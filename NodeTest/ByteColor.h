#pragma once
#include "Defines.h"
#include "BType.h"
class ByteColor : public BType
{
	byte R;
	byte G;
	byte B;

public:
	ByteColor()
	{
		R = 0;
		G = 0;
		B = 0;
	}

	ByteColor(byte red, byte green, byte blue)
	{
		R = red;
		G = green;
		B = blue;
	}

	ByteColor& operator+(ByteColor color)
	{
		byte red = R + color.R;
		byte green = G + color.G;
		byte blue = B + color.B;

		ByteColor* resultColor = new ByteColor(red, green, blue);

		return *resultColor;
	}
};