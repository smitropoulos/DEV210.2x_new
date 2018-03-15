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

private:

	short int _age=0;

protected:

	std::string _name="";
	std::string _lastName="";
	std::string race="";
	float _weight=0;
	float _height=0;
	std::string _phone="";

public:

	Person();    //Default constructor
	Person (std::string name, std::string lastName);    //Two var constructor
	Person (std::string name, std::string lastName,short int age);    //Three var constructor

		//Destructor
	virtual ~Person();

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
	virtual void outputIdentity()=0;	//Pure virtual function
	virtual void outputAge();
};


#endif /* Person_hpp */
