	//
	//  Student.cpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Student.hpp"

Student::Student(){}    //Default constructor

Student::Student (std::string name, std::string lastName){    //Two var constructor
	_name=name;
	_lastName=lastName;
}

Student::Student (std::string name, std::string lastName,short int age){    //Three var constructor
	_name=name;
	_lastName=lastName;
	setAge(age);	//Since Person::_age is private, we need a setter to alter it.

}


void Student::outputIdentity(){
	std::cout<<"I am a Student!";
}

void Student::outputAge(){
	this->outputIdentity();
	Person::outputAge();
}
