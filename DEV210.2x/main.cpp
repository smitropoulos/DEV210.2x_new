
#include <iostream>
#include "Person.cpp"


int main(int argc, const char * argv[]) {



	Person *pOne = new Person("Gerry", "O\'Brien");
	std::cout << pOne->GetLastName() << endl;

	delete pOne;

	return 0;
}

