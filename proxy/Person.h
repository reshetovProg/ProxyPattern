#pragma once
#include<string>
class Person
{
	friend class Database;
	std::string name;
	std::string phone;
public:
	Person();
	Person(std::string name, std::string phone);
};

