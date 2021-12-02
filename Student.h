#pragma once
#include "person.h"
#include <string>
using std::string;

class Student:
	public Person
{
public:
	Student(string id, string newName, double newgpa = 0.0);
protected:
	//Person::sNumber
	//person::name
private:
	double gpa;
};

