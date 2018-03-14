	//
	//  Teacher.cpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Teacher.hpp"

Teacher::Teacher(){}
Teacher::Teacher(std::string firstName,std::string lastName,short int age,std::string address,std::string city, std::string phone){

	_firstName=firstName;
	_lastName=lastName;
	_age=age;
	_city=city;
	_address=address;
	_phone=phone;


}

Teacher::~Teacher(){

}

	//Getters
std::string Teacher::getFirstName(){
	return _firstName;
}
std::string Teacher::getLastName(){
	return _lastName;
}
std::string Teacher::getAddress(){
	return _address;
}
std::string Teacher::getCity(){
	return _city;
}
std::string Teacher::getPhone(){
	return _phone;
}
short int Teacher::getAge(){
	return _age;
}

	//Setters
void Teacher::setFirstName(std::string name){
	_firstName=name;
}
void Teacher::setLastName(std::string lname){
	_lastName=lname;
}
void Teacher::setAddress(std::string address){
	_address=address;
}
void Teacher::setCity(std::string city){
	_city=city;
}
void Teacher::setPhone(std::string phone){
	_phone=phone;
}
void Teacher::getAge(short int age){
	_age=age;
}

	//Functions
void Teacher::gradeStudent(){
	std::cout<<"Student Graded!"<<std::endl;
}

void Teacher::sitInClass(){
	std::cout<<"Sitting at front of class"<<std::endl;
}

