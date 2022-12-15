#pragma once
#include <map>
#include <string>
#include "Person.h"
#include <iostream>
#include <fstream>
#include <vector>
class Database
{
	std::string path;
	std::map<int, Person> persons;
	int last_changes;
	Person split(std::string str, char sep) {
		std::string buf = "";
		std::vector<std::string> array;
		for (int i = 0; i <= str.size(); i++) {
			if (str[i] == sep || str[i] == '\0') {
				std::cout << buf << std::endl;
				array.push_back(buf);
				buf = "";
			}
			else buf += str[i];
		}
		return Person(array[0], array[1]);
	}
public:
	Database(std::string path);
	Person getPerson(int id);
};

