#include "DataCache.h"

int main()
{
	DataCache* cache = new DataCache();

	IntCacheItem* item1 = new IntCacheItem();
	IntCacheItem* item2 = new IntCacheItem();

	cache->AddData<IntCacheItem>(item1);
	cache->AddData<IntCacheItem>(item2);

	item1->value = 3;
	item2->value = 5;

	IntCacheItem* test = (IntCacheItem)cache->cachedItems[0];
	return 0;
}