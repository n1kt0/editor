#include "DataCache.h"

DataCache* DataCache::instance = 0;

DataCache* DataCache::GetInstance()
{
	if(instance == 0)
	{
		instance = new DataCache();
	}
	return instance;
}