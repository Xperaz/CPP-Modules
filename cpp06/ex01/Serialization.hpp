#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>

typedef struct Serialize
{
	void *ptr;
}	Data;


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif /* *************************************************** SERIALIZATION_H */