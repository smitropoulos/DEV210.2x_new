#include "Student.hpp"
#include "Teacher.hpp"
#include <iostream>
int main(int argc, const char * argv[]) {


	Student student1("John","Wick",43);
	student1.outputIdentity();
	student1.outputAge();

	Teacher teacher1("John","Wick",43);
	teacher1.outputAge();
	return 0;
}

