#include <iostream>
#include "Student.h"
#include "Course.h"
#include "instructor.h"
using namespace std;

int main() {
	instructor basic("s0000001", "basic", "ib1111");
	Student student1("s0000002", "bob", 4.0);
	Student student2("s0000003", "billy");
	Student student3("s0000004", "bobette");

	Course programmingI("cit-1154-c02");

	programmingI.addInstructor(basic);
	programmingI.addStudent(student1, 100.0);
	programmingI.addStudent(student2);
	programmingI.addStudent(student3);

	programmingI.printCourseInfo();

	return 0;
}