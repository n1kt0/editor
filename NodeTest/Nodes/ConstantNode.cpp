#include "ConstantNode.h"

ConstantNode::ConstantNode(void)
{
	outPin = new OutputPin<Numeric>();
}

ConstantNode::~ConstantNode(void)
{
}

void ConstantNode::SetValue(double value)
{
	Numeric num(value);

	outPin->SetValue(num);
	//*outPin->data = value;
}