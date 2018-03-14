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

class Student {
private:
	std::string _firstName="";
	std::string _lastName="";
	short int _age=0;
	std::string _address="";
	std::string _city="";
	std::string _phone="";

public:
	Student();
	Student(std::string firstName,std::string lastName,short int age,std::string address,std::string city, std::string phone);
	~Student();

		//Getters
	std::string getFirstName();
	std::string getLastName();
	std::string getAddress();
	std::string getCity();
	std::string getPhone();
	short int getAge();

		//Setters
	void setFirstName(std::string name);
	void setLastName(std::string lname);
	void setAddress(std::string address);
	void setCity(std::string city);
	void setPhone(std::string phone);
	void getAge(short int age);

		//Methods
	void sitInClass();



};


#endif /* Student_hpp */
