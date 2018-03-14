	//
	//  Student.hpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 14/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>

class Student {
private:
	std::string firstName="";
	std::string lastName="";
	short int age=0;
	std::string address="";
	std::string city="";
	std::string phone="";

public:
	Student();
	Student(std::string firstName,std::string lastName,short int age,std::string address,std::string city, std::string phone);
	~Student();

	
};

#endif /* Student_hpp */
