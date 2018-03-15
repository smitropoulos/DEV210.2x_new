	//
	//  Teacher.hpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#pragma once
#ifndef Teacher_hpp
#define Teacher_hpp

#include <stdio.h>
#include <iostream>
#include "Person.hpp"

class Teacher : public Person
{
public:
	Teacher();    //Default constructor
	Teacher (std::string name, std::string lastName);    //Two var constructor
	Teacher (std::string name, std::string lastName,short int age);    //Three var constructor

	virtual void outputIdentity();
	virtual void outputAge();
};

#endif /* Teacher_hpp */
