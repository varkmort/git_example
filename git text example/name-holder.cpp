#include "name-holder.hpp"

#include <vector>


static std::vector<std::string> _names;

void AddName(std::string name) {
	_names.push_back(name);
}

static Array g_Current;

const Array &CurrentNames() {
	g_Current.data = _names.data();
	g_Current.size = _names.size();
	return g_Current;
}
