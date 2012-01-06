#ifdef OUTPUT_PIN_H

#include "OutputPin.h"
#include "..\DataCache.h"

template<class T> OutputPin<T>::OutputPin(void)
{
	DataCache* cache = DataCache::GetInstance();
	data = cache->AddNewData<T>();
}

template<class T> OutputPin<T>::~OutputPin(void)
{
}

template<class T> void OutputPin<T>::SetValue(T value)
{
	*data = value;
}

#endif //OUTPUT_PIN_H