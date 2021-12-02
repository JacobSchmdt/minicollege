#include "person.h"

Person::Person(string id, string newName)
{
	sNum = id;
	name = newName;
}

string Person::getName()
{
	return name;
}
