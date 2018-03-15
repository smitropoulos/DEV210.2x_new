	//
	//  Person.hpp
	//  PointersLab
	//
	//  Created by Stefanos Mitropoulos on 13/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//
#pragma once
#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Person{

protected:

	std::string _name,_lastName;
	float _weight=0;
	float _height=0;
	short int _age=0;

public:

	Person();    //Default constructor
	Person (std::string name, std::string lastName);    //Two var constructor
	Person (std::string name, std::string lastName,short int age);    //Three var constructor


		//Destructor
	~Person();

		//Getters
	const std::string GetLastName();
	const std::string GetName();
	const float getWeight();
	const float getHeight();
	const short int getAge();


		//Setters
	void setFirstName(std::string fName);
	void setLastName(std::string lName);
	void setWeight(float weight);
	void setHeight(float height);
	void setAge(float age);

		//Methods

	void SayHello();

};


#endif /* Person_hpp */
