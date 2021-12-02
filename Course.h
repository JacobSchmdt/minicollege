#pragma once
#include "instructor.h"
#include "Student.h"
#include <vector>
#include <string>
#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setw;
using std::left;
using std::right;
using std::string;
using std::vector;

class Course
{
public:
	Course(string newName);
	void addInstructor(instructor newInstructor);
	void addStudent(Student newStudent, double newGrade = 0.0);
	int printCourseInfo();
protected:
private:
	instructor courseInstructor;
	vector<Student> studentList;
	vector<double> gradeList;
	string courseName;
};