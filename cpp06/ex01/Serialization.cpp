#include "Serialization.hpp"


uintptr_t serialize(Data* ptr)
{
	uintptr_t uin = reinterpret_cast<uintptr_t>(ptr);
	return (uin);
}

Data* deserialize(uintptr_t raw)
{
	Data *p = reinterpret_cast<Data *>(raw);
	return (p);
}