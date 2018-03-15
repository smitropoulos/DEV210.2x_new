	//
	//  Student.hpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//
#pragma once
#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>
#include "Person.hpp"

class Student : public Person	//Subclass of Person;
{
public:
	Student();    //Default constructor
	Student (std::string name, std::string lastName);    //Two var constructor
	Student (std::string name, std::string lastName,short int age);    //Three var constructor

	virtual void outputIdentity();
	virtual void outputAge();

};

#endif /* Student_hpp */
