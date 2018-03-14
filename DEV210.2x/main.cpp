
#include <iostream>
#include "Person.hpp"
#include "ClassScope.hpp"

int main(int argc, const char * argv[]) {

	Person p;

	p.setFirstName("Gerry");
	std::cout << p.GetName() << std::endl;

		// this line will output an invalid age message due to the
		// validation check in the SetAge() function
	p.setAge(-5);

	std::cout<<p.GetName()<<" age "<<p.getAge()<<std::endl;


    return 0;
}

