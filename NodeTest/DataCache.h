#pragma once
#ifndef DATA_CACHE_H
#define DATA_CACHE_H

#include <vector>

#include "DataTypes\BaseType.h"

using namespace std;

class CacheItem
{

};

class IntCacheItem : public CacheItem
{
public:
	int value;

	IntCacheItem()
	{
		value = 0;
	}
};

class DataCache
{
	static DataCache* instance;
public:
	vector<BaseType*> cachedItems;
	//vector<CacheItem*> cachedItems;

	static DataCache* GetInstance();

	//template<class T> void AddData(T* item)
	//{
	//	cachedItems.push_back(item);
	//}

	template<class T> T* AddNewData()
	{
		T* item = new T();
		cachedItems.push_back(item);
		return item;
	}

private:
	DataCache() {}

};

#endif //DATA_CACHE_H