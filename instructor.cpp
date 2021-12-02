#include "instructor.h"

instructor::instructor(string id, string newName, string newOffice)
	: Person(id,newName)
{
	office = newOffice;
}
