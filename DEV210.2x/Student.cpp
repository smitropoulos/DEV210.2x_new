	//
	//  Student.cpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Student.hpp"

/*
Student::Student(){}
Student::Student(std::string firstName,std::string lastName,short int age,std::string address,std::string city, std::string phone){

	_firstName=firstName;
	_lastName=lastName;
	_age=age;
	_city=city;
	_address=address;
	_phone=phone;


}

Student::~Student(){

}

	//Getters
std::string Student::getFirstName(){
	return _firstName;
}
std::string Student::getLastName(){
	return _lastName;
}
std::string Student::getAddress(){
	return _address;
}
std::string Student::getCity(){
	return _city;
}
std::string Student::getPhone(){
	return _phone;
}
short int Student::getAge(){
	return _age;
}

	//Setters
void Student::setFirstName(std::string name){
	_firstName=name;
}
void Student::setLastName(std::string lname){
	_lastName=lname;
}
void Student::setAddress(std::string address){
	_address=address;
}
void Student::setCity(std::string city){
	_city=city;
}
void Student::setPhone(std::string phone){
	_phone=phone;
}
void Student::getAge(short int age){
	_age=age;
}

void Student::sitInClass(){
	std::cout<<"Sitting in main theater"<<std::endl;
}
*/

#include "Student.hpp"

Student::Student()
{
}


Student::~Student()
{
}

void Student::setAge(int age)
{
	if (age < 5)
		{
		std::cout << "Student age needs to at least 5 years old." << std::endl;
		}
	else
		{
		this->_age = age;
		}
}

int Student::getAge()
{
	return this->_age;
}

void Student::SayHello()
{
	std::cout << "Hey, how's it goin'?" << std::endl;
}
