#pragma once
#include "person.h"
#include <string>
using std::string;

class instructor :
	public Person
{
public:
	instructor(string id = string("s0000000"), string newName = string("default"), string newOffice = string("no office"));
protected:
private:
	string office;
};

