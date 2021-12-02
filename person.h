#pragma once
#include <string>
using std::string;
class Person
{
public:
	 Person(string id, string newName);
	 string getName();
protected:
	string sNum;
	string name;
private:
};

