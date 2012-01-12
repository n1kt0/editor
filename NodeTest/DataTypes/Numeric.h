#pragma once
#include "BaseType.h"

class Numeric : public BaseType
{
	double* data;
public:
	Numeric(void);
	Numeric(double);
	~Numeric(void);

	//Numeric operator=(double value);
	Numeric operator=(double value);
	
	// Overload +. 
	double operator+(Numeric* op2) 
	{ 
		//Numeric* temp = this; 
		double val = *data + *op2->data;
		//*temp->data = *data + *op2->data;  
		return val; 
	} 

	// Overload +. 
	//Numeric operator+(Numeric* op2) 
	//{ 
	//	//Numeric temp;// = this; 
	//	//temp.data = *data + *op2->data;
	//	//*data += *op2->data;
	//	//*temp->data = *data + *op2->data;  
	//	return this; 
	//} 

	double GetValue();
};

//struct Numeric : public BaseType
//{
//  double data;
//  X& operator=(X& a) { return a; }
//  X& operator=(int a) {
//    data = a;
//    return *this;
//  }
//};
//
//int main() {
//  X x1, x2;
//  x1 = x2;      // call x1.operator=(x2)
//  x1 = 5;       // call x1.operator=(5)
//}