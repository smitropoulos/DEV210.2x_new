//
//  Person.cpp
//  PointersLab
//
//  Created by Stefanos Mitropoulos on 13/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Person.hpp"


class Person{

private:
	std::string _name,_lastName;
	short int _age;
	float _weight,_height;

public:
	Person(){}	//Default constructor

	Person (std::string name, std::string lastName){	//Two var constructor
		_name=name;
		_lastName=lastName;
	}

	Person (std::string name, std::string lastName,short int age){	//Three var constructor
		Person::Person (name,lastName);
		_age=age;
	}

		//Destructor
	~Person(){
		cout<<"Object is being deleted"<<endl;
	}

	//Getters
	const std::string GetLastName(){
		return _lastName;
	}
	const std::string GetName(){
		return _name;
	}
	const float getWeight(){
		return _weight;
	}const float getHeight(){
		return _height;
	}
	//===========

	void SayHello(){
		std::cout<<"Hello!"<<std::endl;
	}

};
