//
//  StringStreams.cpp
//  DEV210.2x
//
//  Created by Stefanos Mitropoulos on 17/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "StringStreams.hpp"
#include <sstream>// For std::stringstream.
#include <iostream>
void StringStreams(){

		// Create an ostringstream object, which supports write-only operations.
	std::ostringstream stream1;

	stream1 << "Jane" << " " << 42 << " " << 15000 << std::endl;

		// Create an istringstream object, which supports read-only operations.
	std::istringstream stream2(stream1.str());

		// Read formatted data from istringstream.
	std::string name;
	int age;
	double salary;
	stream2 >> name >> age >> salary;

	std::cout
	<< "Name: " << name << std::endl
	<< "Age: " << age << std::endl
	<< "Salary:" << salary << std::endl; 
	
}
