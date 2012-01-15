#include <iostream>
#include <string>

#include "Defines.h"
#include "DataCache.h"
#include "Pins\BasePin.h"
#include "Nodes\ConstantNode.h"
#include "Nodes\AdderNode.h"

template<class T> void ConnectPin(OutputPin<T>* outPin, InputPin<T>* inPin)
{
	inPin->data = outPin->data;
}

int main()
{
	/*Number num1, num2, num3;
	
	num1 = 5.0;
	num2 = 3;
	num3 = num1 + num2;*/

	/*ByteColor color1(64, 64, 64);
	ByteColor color2(32, 32, 32);
	ByteColor color3;*/

//	color3 = color1 + color2;

	ConstantNode* cn1 = new ConstantNode();
	cn1->SetValue(5);
	
	ConstantNode* cn2 = new ConstantNode();
	cn2->SetValue(3);

	AdderNode* add = new AdderNode();

	ConnectPin<Numeric>(cn1->outPin, add->aPin);
	ConnectPin<Numeric>(cn2->outPin, add->bPin);

	for (int i = 0; i < 1000; i++)
		{
			add->Process();
	}


	cn1->SetValue(10);

	add->Process();

	//DataCache* cache = DataCache::GetInstance();	//new DataCache();

	/*IntCacheItem* item1 = new IntCacheItem();
	IntCacheItem* item2 = new IntCacheItem();

	cache->AddData<IntCacheItem>(item1);
	cache->AddData<IntCacheItem>(item2);

	item1->value = 3;
	item2->value = 5;

	IntCacheItem* item3 = new IntCacheItem();
	item3->value = item1->value + item2->value;*/

	//boost::variant< int, std::string > u("hello world");
	//std::cout << u; // output: hello world

	//int result = boost::apply_visitor( my_visitor(), u );
	//std::cout << result; // output: 11 (i.e., length of "hello world")

	////IntCacheItem* test = cache->cachedItems[0];

	//// Signal with no arguments and a void return value
	//boost::signal<void ()> sig;

	//// Connect a HelloWorld slot
	//HelloWorld hello;
	//sig.connect(hello);

	//// Call all of the slots
	//sig();

	return 0;
}