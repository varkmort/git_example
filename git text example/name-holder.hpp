#ifndef NAME_HOLDER_HPP
#define  NAME_HOLDER_HPP

#include <string>

struct Array {
	const std::string *data;
	int size;
};


void AddName(std::string name);


const Array& CurrentNames();




#endif // !NAME_HOLDER_HPP
