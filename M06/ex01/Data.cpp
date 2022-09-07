#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

/*
	It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.
	It does not check if the pointer type and data pointed by the pointer is same or not.
*/
