#ifndef NAME_HOLDER_HPP
#define  NAME_HOLDER_HPP

#include <string>


//Простой массив. используется для передачи информации о хранимом списке имён
struct Array {
	const std::string *data;
	int size;
};

//Добавляет имена в список имён
void AddName(std::string name);

//сообщает имена имеющиеся в списке в виде массива
const Array& CurrentNames();




#endif // !NAME_HOLDER_HPP
