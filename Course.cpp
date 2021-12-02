#include "Course.h"
#include <string>
using std::string;
Course::Course(string newName)
{
	courseName = newName;
}

void Course::addInstructor(instructor newInstructor)
{
	courseInstructor = newInstructor;
}

void Course::addStudent(Student newStudent, double newGrade)
{
	studentList.push_back(newStudent);
	gradeList.push_back(newGrade);
}

int Course::printCourseInfo()
{
	cout << "course Name: " << courseName << endl;
	cout << "instructor: " << courseInstructor.getName() << endl;
	cout << std::setw(20) << std::left << "student";
	cout << std::setw(10) << std::right << std::fixed << std::setprecision(2) << "grade" << endl;
	cout << "student      Grade" << endl;
	for (unsigned int i = 0; i < studentList.size(); ++i) {
		cout << studentList[i].getName();
		cout << gradeList[i];
		cout << endl;
	}
	return 0;
}
