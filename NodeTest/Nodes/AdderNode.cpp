#include "AdderNode.h"


AdderNode::AdderNode(void)
{
	aPin = new InputPin<Numeric>();
	bPin = new InputPin<Numeric>();

	resultPin = new OutputPin<Numeric>();
}


AdderNode::~AdderNode(void)
{
}

void AdderNode::Process()
{
	Numeric* a = aPin->GetValue();
	Numeric* b = bPin->GetValue();//.GetValue();
	Numeric result(a->GetValue() + b->GetValue());

	resultPin->SetValue(result);
}