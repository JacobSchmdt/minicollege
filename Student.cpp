#include "Student.h"

Student::Student(string id, string newName, double newgpa)
	:Person(id,newName)
{
	gpa = newgpa;
}
