#pragma once
class BaseNode
{
public:
	BaseNode(void);
	~BaseNode(void);

	virtual void Process() = 0;
};

