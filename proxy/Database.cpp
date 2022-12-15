#include "Database.h"

Database::Database(std::string path)
{
	last_changes = -1;
	this->path = path;
}
Person Database::getPerson(int id)
{
	return Person();
}

Person Database::getPerson(int id)
{
	auto search = persons.find(id);
	if (search != persons.end()) {
		return persons[id];
	}
	else {
		std::ifstream in{ path };
		if (in.is_open()) {
			int i = -1;
			std::string str;
			while (std::getline(in, str)) {
				if (i == id) { break; }
				++i;
			}
			persons[id] = split(str, ';');
			return persons[id];
		}
		else { throw "Database exception: Can't get file"; }
		in.close();
	}
}
