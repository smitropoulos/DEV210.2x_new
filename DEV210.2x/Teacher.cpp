	//
	//  Teacher.cpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Teacher.hpp"

Teacher::Teacher(){}    //Default constructor

Teacher::Teacher (std::string name, std::string lastName){    //Two var constructor
	_name=name;
	_lastName=lastName;
}

Teacher::Teacher (std::string name, std::string lastName,short int age){    //Three var constructor
	_name=name;
	_lastName=lastName;
	setAge(age);		//Since Person::_age is private, we need a setter to alter it.

}


void Teacher::outputIdentity(){
	std::cout<<"I am a Teacher";

}

void Teacher::outputAge(){
	outputIdentity();
	Person::outputAge();
}
