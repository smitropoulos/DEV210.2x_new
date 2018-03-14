//
//  Course.cpp
//  DEV210.2x
//
//  Created by Stefanos Mitropoulos on 14/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Course.hpp"

Course::Course(std::string name){
	_name=name;
}

void Course::setName(std::string name){
	_name=name;
}

void Course::addStudent(Student st){
	if (numberOfStudents>0){
		students[3-numberOfStudents--]=st;
		}
	else{
		std::cout<<"The course is full"<<std::endl;
	}
}

