#include <vector>

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
public:
	vector<CacheItem*> cachedItems;

	template<class T> void AddData(T* item)
	{
		cachedItems.push_back(item);
	}
};