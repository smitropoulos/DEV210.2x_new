//
//  Dog.hpp
//  DEV210.2x
//
//  Created by Stefanos Mitropoulos on 14/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Dog_hpp
#define Dog_hpp

#include <stdio.h>
#include <iostream>


class Dog{

private:
	std::string _name,_lastName;
	short int _age;
	float _weight,_height;

public:

	Dog();    //Default constructor
	Dog (std::string name);    //1 var constructor
	Dog (std::string name, std::string lastName,short int age);    //Three var constructor


		//Destructor
	~Dog();

		//Getters
	const std::string GetLastName();
	const std::string GetName();
	const float getWeight();
	const float getHeight();

		//Setters
	void setFirstName(std::string fName);
	void setLastName(std::string lName);
	void  setWeight(float weight);
	void setHeight(float height);

		//===========

	void SayHello();

};

#endif /* Dog_hpp */
