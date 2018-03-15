	//
	//  Person.cpp
	//  PointersLab
	//
	//  Created by Stefanos Mitropoulos on 13/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//
#include "Person.hpp"

Person::Person(){}    //Default constructor

Person::Person (std::string name, std::string lastName){    //Two var constructor
	_name=name;
	_lastName=lastName;
}

Person::Person (std::string name, std::string lastName,short int age){    //Three var constructor
	_name=name;
	_lastName=lastName;
	_age=age;
}

	//Destructor
Person::~Person(){
	cout<<"Object is being deleted"<<endl;
}

	//Getters
const std::string Person::GetLastName(){
	return _lastName;
}
const std::string Person::GetName(){
	return _name;
}
const float Person::getWeight(){
	return _weight;
}
const float Person::getHeight(){
	return _height;
}
const short int Person::getAge(){
	return _age;
}

	//Setters
void Person::setFirstName(std::string fName){
	_name=fName;
}
void Person::setLastName(std::string lName){
	_lastName=lName;
}
void Person::setWeight(float weight){
	_weight=weight;
}
void Person::setHeight(float height){
	_height=height;
}
void Person::setAge(float age){
	if (age<=0)
		std::cout<<"This is not a valid age. Please try again."<<std::endl;
	else
		_age=age;
}



	//Methods

void Person::SayHello(){
	std::cout<<"Hello!"<<std::endl;

}

void Person::outputAge(){
	std::cout<<"I am "<<_age<<"years old!"<<std::endl;
}
