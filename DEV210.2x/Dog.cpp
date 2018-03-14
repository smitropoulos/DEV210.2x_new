	//
	//  Dog.cpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//
#include "Dog.hpp"


Dog::Dog(){}    //Default constructor

Dog::Dog (std::string name){    //Two var constructor
	_name=name;
	
}

Dog::Dog (std::string name, std::string lastName,short int age){    //Three var constructor
	_name=name;
	_lastName=lastName;
	_age=age;
}

	//Destructor
Dog::~Dog(){
	std::cout<<"Object is being deleted"<<std::endl;
}

	//Getters
const std::string Dog::GetLastName(){
	return _lastName;
}
const std::string Dog::GetName(){
	return _name;
}
const float Dog::getWeight(){
	return _weight;
}const float Dog::getHeight(){
	return _height;
}
	//===========

void Dog::SayHello(){
	std::cout<<"Woof!"<<std::endl;
}


